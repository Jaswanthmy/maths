/* PROGRAM TO COMPUTE VALUE OF nCr USING RECURSIVE FUNCTION. */
#include <stdio.h>
long int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    printf("20BCS065 RAVI GOWRI JASWANTH\n");
    long ncr;
    int n, r;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);
    ncr = fact(n) / (fact(r) * fact(n - r));
    printf("Value of %dC%d is %ld", n, r, ncr);

}