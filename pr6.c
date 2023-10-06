//C program to calculate simple interest.

#include<stdio.h>
int main()
{
    float p,r,t,si;

    printf("enter the principale amount = ");
    scanf("%f",&p);

    printf("enter the rate of interast = ");
    scanf("%f",&r);

    printf("enter the time duration = ");
    scanf("%f",&t);

    si = (p*r*t)/100;

    printf("The simple interest is = %f", si);
    return 0;

}