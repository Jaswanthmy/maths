/*PROGRAM FOR CURVE FITTING USING LEAST SQUARES*/
#include <stdio.h>
#include <math.h>

int main()
{
    printf("20BCS065 RAVI GOWRI JASWANTH\n");

    int i, j, k, n = 2, N;
    printf("\nEnter the no. of data pairs to be entered: ");
    scanf("%d", &N);
    double x[N], y[N];
    printf("\nEnter the x-axis values: ");
    for (i = 0; i < N; i++)
        scanf("%lf", &x[i]);
    printf("\nEnter the y-axis values: ");
    for (i = 0; i < N; i++)
        scanf("%lf", &y[i]);

    double X[2 * n + 1];
    for (i = 0; i < 2 * n + 1; i++)
    {
        X[i] = 0;
        for (j = 0; j < N; j++)
        {
            X[i] = X[i] + pow(x[j], i);
        }
    }
    double B[n + 1][n + 2], a[n + 1];
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            B[i][j] = X[i + j];
        }
    }
    double Y[n + 1];
    for (i = 0; i < n + 1; i++)
    {
        Y[i] = 0;
        for (j = 0; j < N; j++)
        {
            Y[i] = Y[i] + pow(x[j], i) * y[j];
        }
    }
    for (i = 0; i <= n; i++)
        B[i][n + 1] = Y[i];
    n = n + 1;

    for (i = 0; i < n; i++)
    {
        for (k = i + 1; k < n; k++)
        {
            if (B[i][i] < B[k][i])
            {
                for (j = 0; j <= n; j++)
                {
                    double temp = B[i][j];
                    B[i][j] = B[k][j];
                    B[k][j] = temp;
                }
            }   
        }           
    }
    for (i = 0; i < n - 1; i++)
    {
        for (k = i + 1; k < n; k++)
        {
            double t = B[k][i] / B[i][i];
            for (j = 0; j <= n; j++)
                B[k][j] = B[k][j] - t * B[i][j];
        }
    }
    for (i = n - 1; i >= 0; i--)
    {
        a[i] = B[i][n];
        for (j = 0; j < n; j++)
            if (j != i)
                a[i] = a[i] - B[i][j] * a[j];
        a[i] = a[i] / B[i][i];
    }
    printf("\nThe values of the coefficients are as follows:\n");
    for (i = 0; i < n; i++)
        printf("x^%d=%.2lf\n", i, a[i]); // Prints the values of x^0,x^1,x^2,x^3,....
    printf("\nHence the fitted Polynomial is given by:\ny=");
    for (i = 0; i < n; i++)
        printf(" + (%.2lf) x^%d", a[i], i);

    printf("\n\n");
}