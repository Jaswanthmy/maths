/*PROGRAM TO GENERATE FIRST 50 
PRIME NUMBERS EXCEPT DIVISIBLE BY 5 AND 7*/
#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int prime = 1;
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    return prime;
}
int main()
{
    printf("20BCS065 RAVI GOWRI JASWANTH\n");

    int counter = 0;
    printf("First 50 prime numbers are:\n");
    for (int i = 2; counter <= 51; i++)
    {
        if (isPrime(i) == 1)
        {
            if (i % 5 != 0 && i % 7 != 0)
            {
                printf("%d ", i);
            }
            counter++;
        }
    }

}