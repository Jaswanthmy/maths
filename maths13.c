/*PROGRAM TO FIND SUM OF FIRST 15 TERMS OF SINE SERIES AT x=0.12*/
#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{

    printf("20BCS065  RAVI GOWRI JASWANTH\n\n");
    int i, j = 1;
    float x = 0.12, sum = 0;

    for (i = 1; i <= 15; i++)
    {
        sum += pow(-1, i+1) * pow(x, j) / factorial(j);
        j += 2;
    }
    printf("sum of sine series is %f\n", sum);

}