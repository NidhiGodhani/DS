/*C program to generate prime numbers from 1 to “N”.*/

#include<stdio.h>

int main()
{
    int n, i, j, f, m;

    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        m=i;
        f=0;
        for(j=2; j<m; j++)
        {
            if(m%j==0)
            {
                f=1;
                break;
            }
        }

        if(f==0)
            printf("\n%d is prime number ", m);
    }

    return 0;
}