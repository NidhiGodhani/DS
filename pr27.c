#include<stdio.h>
int main(){

       int num;
       printf("Enter number of row: ");
       scanf("%d",&num);

      
         for(int i=1;i<=num;i++)
              {
                     for(int j=1;j<=i;j++)
                     {
                            printf("%d ",j);
                     }
                     printf("\n");
              }

        for(int i=num;i>0;i--)
              {
                     for(int j=i-1;j>0;j--)
                     {
                            printf("%d ",i-j);
                     }
                     printf("\n");
              }
       
       // B

         for(int i=1;i<=num;i++)
              {
                     for(int j=1;j<=i;j++)
                     {
                            printf("%d ",i);
                     }
                     printf("\n");
              }

        for(int i=num;i>0;i--)
              {
                     for(int j=i-1;j>0;j--)
                     {
                            printf("%d ",i-1);
                     }
                     printf("\n");
              }
       
       
}