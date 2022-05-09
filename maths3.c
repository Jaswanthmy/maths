/*PROGRAM TO FIND CUBES OF FIRST 10 
NATURAL NUMBERS AND THEIR SUM USING FUNCTION*/
#include <stdio.h>
#include <math.h>

long int cube(int n)
{
    return pow(n, 3);
}

int main()
{
    printf("20BCS065 RAVI GOWRI JASWANTH\n");

    int i, sum = 0;
    long int c;

    for (i = 1; i <= 10; i++)
    {
        c = cube(i);
        sum += c;
        printf("cube of natural number %d is %ld\n", i, c);
    }
    printf("sum of cubes of first 10 natural numbers is %d\n", sum);
}