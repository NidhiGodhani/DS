// C program to convert centigrade into Fahrenheit. Formula: F= (1.8 * C) +32.

#include<stdio.h>

int main()
{
    float c,fh;
    printf("enter the temprature in centigrade \n ");
    scanf("%f",&c);

    // formula for calculating 

    fh = (c*1.8)+32;

    printf("Temprature in fahrenhit is %f\n", fh);
    return 0;

}