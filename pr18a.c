/*C program to convert from (do-while)
a. Decimal to binary*/

#include<stdio.h>
#include<math.h>

int main()

{
    int num, bin = 0, rem = 0, place = 1;

    printf("Enter the decimal number\n");
    scanf("%d", &num);

    printf("\nBinary equivalant of %d is ", num);

    while(num)
    {
        rem = num % 2;
        num = num / 2;
        bin = bin + (rem * place);
        place = place * 10;
    }

    printf("%d\n", bin);
    
}