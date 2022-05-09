/*PROGRAM FOR FINDING SUM OF SERIES
1 + x + 2x^2/4 + x^3/3 + 4x^4/5! + x^5/5 + 6x^6/12!  at x=0.123  */
#include<stdio.h>
#include<math.h>
long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
double oddTermsSum(double x)
{
    double sum = 0;
    for (int i = 1; i <= 5; i += 2)
    {
        sum += pow(x, i) / i;
    }
    return sum;
}
double evenTermsSum(double x)
{
    double sum = 0;
    for (int i = 2; i <= 6; i += 2)
    {
        sum += i * pow(x, i) / factorial(2 * i);
    }
    return sum;
}
int main()
{
    printf("20BCS065  RAVI GOWRI JASWANTH \n\n");

    float x = 0.123;
    double sumEvenTerms = evenTermsSum(x);
    double sumOddTerms = oddTermsSum(x);

    printf("The sum of series is: %.4lf", 1 + sumEvenTerms + sumOddTerms);

}