//C program to find the area and circumference of a circle.

#include<stdio.h>

 int main()
 {
    float r,a,c;
    printf("enter the radius : ");
    scanf("%f",&r);

    // logic to calculate area and circumference of a circle

    a = 3.14*r*r;
    c = 2*3.14*r;

    // display the output

    printf("area %f",a);
    printf(" \n circumference %f",c);
    return 0;

 }
