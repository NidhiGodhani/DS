//C program to swap variable values of two variables
//a. Using a temporary variable

#include<stdio.h>

int main()
{
    int x = 10, y = 20, temp;

    printf("x = %d, y = %d\n", x, y);
    temp = x;
    x = y;
    y = temp;

    printf("After swapping x = %d, y = %d\n", x, y);
    return 0;
}
