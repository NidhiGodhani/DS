/*C program to find the largest, smallest and second
largest of three numbers.*/

#include<stdio.h>

int main()
{
    int a,b,c,largest,smallest,secondlargest;
    

    printf("Enter the three number = ");
    scanf("%d%d%d",&a,&b,&c);

    largest = a;
    smallest = a;

    if(b>a)
        largest = b;

    if(c>a)
        largest = c;

    if(b<a)
        smallest = b;

    if(c<a)
        smallest = c;

    secondlargest = (a+b+c)-(largest+smallest);

    printf(" %d is largest number ", largest);

    printf(" %d is smallest number ", smallest);

    printf(" %d is second largest number ", secondlargest);

    return 0;
}