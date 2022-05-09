/*PROGRAM TO CONVERT A GIVEN BINARY NUMBER TO DECIMAL*/
#include <stdio.h>
#include <math.h>
int main()
{

    printf("20BCS065  RAVI GOWRI JASWANTH\n");
    
    int n, i, bin[100], sum = 0,TEMP;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    TEMP=n;
    i = 0;
    while (n > 0)
    {
        bin[i] = n % 10;
        sum += bin[i] * pow(2, i);
        n = n / 10;
        i++;
    }
    printf("Decimal Equivalent of %d is: %d\n", TEMP, sum);
}