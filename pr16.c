/*C program to reverse a number (while).*/

#include<stdio.h>

int main()
{
    int n, r;

    printf("Enter the number\n");
    scanf("%d", &n);

    while (n>0)
    {
         r=n%10;
         printf("%d", r);
         n=n/10;
    }

    return 0;
    
}