// 7.	C program to find the largest of three numbers (if).

#include <stdio.h>
int main()

{
    int a,b,c;

    printf("enter value of A = ");
    scanf("%d",&a);

     printf("enter value of B = ");
    scanf("%d",&b);

     printf("enter value of C = ");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("Value of a is Big: %d",a);
    }
    else if(b>a && b>c)
    {
        printf("value of b is Big: %d",b);
    }

    else 
        printf("value of c is Big: %d",c);
    
    return 0;

}