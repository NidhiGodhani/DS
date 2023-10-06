#include<stdio.h>
int main(){

       int num;
       int temp=1;
       printf("Enter number of row: ");
       scanf("%d",&num);

         for(int i=1;i<num;i++)
              {
                     for(int j=0;j<num;j++)
                     {
                            printf("%d ",j+i);
                     }
                     printf("\n");
              }
       
       
       for(int i=1;i<num;i++)
              {
                     for(int j=0;j<i;j++)
                     {
                            printf("%d ",temp);
                            temp++;
                     }
                     
                     printf("\n");
              }
       
       
}