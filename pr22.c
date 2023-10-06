/*C program to calculate x^y (for).*/

#include<stdio.h>

int main()
{
    int i, x, y, ans = 1;
    printf("Enter the value of x : ");
    scanf("%d", &x);

    printf("Enter the value of y : ");
    scanf("%d", &y);

    for(i = 1; i <= y; i++)
    {
        ans*=i;
    }
    
    printf("%d is a power of %d=%d ", x, y, ans);
    return 0;
}

