/*C program to find the factorial of a number (for).*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num, count, fact = 1;

    printf("Enter the number to find its factorial\n");
    scanf("%d", &num);

    for(count = 1; count <= num; count++)
    {
        fact = fact * count;
    }

    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}