//C program to swap variable values of two variables
//b. Without Using a temporary variable

#include<stdio.h>
int main()

{
    int x = 10, y = 5;

    printf("Before swapping x = %d and  y = %d\n", x, y);

    //x = (x + y) -( y = x );

    x = x + y; // x = 15
    y = x - y; // y = 15 - 5 = 10
    x = x - y; // x = 15 - 10 = 5

    printf("After swapping x = %d and y = %d\n", x, y);
    return 0;

}