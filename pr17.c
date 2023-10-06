/*C program to calculate compound interest (do-while).*/


#include <stdio.h>

double power(double x,int y)
{
    double result = 1;
    while(y-- > 0)
        result *= x;

    return result;
}

int main() {
    double principal, rate, time, compoundInterest;
    int n;

    // Input principal amount, rate of interest, time, and the number of times interest is compounded
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (as a decimal): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    rate /= 100;

    double numerator = 1 + rate / (float)n;
    int denominator = (int)n * (int)time;
    // Calculate compound interest
    compoundInterest = principal * power(numerator,denominator) - principal;

    // Display the result
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}