/* C program to check whether a given year is a leap year
(if-else).*/

#include<stdio.h>
 int main()
 {
        int year;
         printf("enter the year = ");
         scanf("%d", &year);

         if((year%4==0 && year%100!=0) || (year%400==0))
            printf("%d year is leap year", year);
            else
            printf("%d year is not leap year", year);

 }