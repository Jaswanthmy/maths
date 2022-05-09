/*PROGRAM TO FIND REVERSED SQUARE NUMBERS */
#include <stdio.h>

int isReverseSquare(int n)
{
    int sq = n * n;
    int rev = 0;
    int revSq = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    while (sq != 0)
    {
        revSq = revSq * 10 + sq % 10;
        sq /= 10;
    }

    if (rev * rev == revSq)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{

    printf("20BCS065 RAVI GOWRI JASWANTH\n");
    
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    printf("Number which have Reverse square property:-\n");
    for (int i = 1; i <= n; i++)
    {
        if (isReverseSquare(i))
        {
            printf("%d\n", i);
        }
    }

}