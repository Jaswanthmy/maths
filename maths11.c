/*PROGRAM TO CONVERT GIVEN DECIMAL NUMBER TO BINARY*/
#include <stdio.h>
int main()
{

    printf("20BCS065  RAVI GOWRI JASWANTH\n");
    
    int i, j, num, p;
    int M[100];
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    p = num;
    i = 0;
    while (num > 0)
    {
        M[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary Equivalent of %d is: ", p);
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", M[j]);
    }
    printf("\n");
    
    
}