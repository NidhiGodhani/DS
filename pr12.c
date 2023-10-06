/*12. C program to find the roots of a quadratic equation
(else-if)*/


#include<stdio.h>
#include<math.h>

int main()
{
    float x1,x2,imaginarypart,realpart,discriminant,a,b,c;

    printf("Enter the value of a,b,c : \n");
    scanf("%f%f%f", &a,&b,&c);

    discriminant = b * b - 4 * a * c;

    if(discriminant > 0)
    {
        x1 = (-b+sqrt(discriminant)/(2*a));
        x1 = (-b-sqrt(discriminant)/(2*a));

        printf("Roots are real and differant: \n");
        printf("x1=%f and x2=%f", x1,x2);

    }

    else if(discriminant == 0){

        x1 = -b/(2*a);
        printf("Roots are real and equal : \n ");
        printf("x1=x2=%f", x1);
    }

    else{
        realpart = -b/(2*a);
        imaginarypart = sqrt(-discriminant)/(2*a);
        printf("Roots are imaginary \n ");
        printf("%f+%fi",realpart,imaginarypart);
        printf("%f-%fi",realpart,imaginarypart);
     }

     return 0;
}