/*C program to find the second largest and second
smallest of four numbers (else-if).*/

#include <stdio.h>

int main() 
{
    int num1, num2, num3, num4;
    int largest, secondLargest, smallest, secondSmallest;

    // Input four numbers
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

   

    // Find the largest and smallest numbers among num1 and num2
    if (num1 > num2) {
        largest = num1;
        smallest = num2;
    } else {
        largest = num2;
        smallest = num1;
    }

    // Compare num3 with largest and secondLargest
    if (num3 > largest) {
        secondLargest = largest;
        largest = num3;
    } else if (num3 > secondLargest) {
        secondLargest = num3;
    }

    // Compare num4 with smallest and secondSmallest
    if (num4 < smallest) {
        secondSmallest = smallest;
        smallest = num4;
    } else if (num4 < secondSmallest) {
        secondSmallest = num4;
    }

    printf("Second Largest: %d\n", secondLargest);
    printf("Second Smallest: %d\n", secondSmallest);

    return 0;
}