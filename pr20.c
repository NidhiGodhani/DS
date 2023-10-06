/*C program to check whether a number is prime or not
(for).*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num, count, prime = 1;

    printf("Enter the positive number\n");
    scanf("%d", &num);

    for(count = 2; count < num; count++)
    {
        if(num % count == 0)
        {
            prime = 0;
            break;
        }
    }

    if(prime)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    
    return 0;
    
}