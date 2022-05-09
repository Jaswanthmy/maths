/*PROGRAM TO FIND GCD USING EUCLID'S ALGORITHM*/
#include <stdio.h>

int GCD(int M, int N)
{
    if (M == 0)
    {
        return N;
    }   
    if (N == 0)
    {
        return M;
    }   
    if (M == N)
    {
        return M;
    }   
    else if (N > M)
    {
        return GCD(N, M);
    }
    else if (M > N)
    {
        return GCD(N, M % N);
    }
}

int main()
{

    printf("20BCS065  RAVI GOWRI JASWANTH\n");
    
    int a, b, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    gcd = GCD(a, b);
    printf("GCD of %d and %d is %d\n", a, b, gcd);

}