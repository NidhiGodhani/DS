// 11.	C program to output the next date for a given date (else-if).

#include<stdio.h>
int main()
{
    int date,month,year,next_d,next_m,next_y;

    printf("Enter Date:  ");
    scanf("%d",&date);

    printf("Enter Month: ");
    scanf("%d",&month);

    printf("Enter Year: ");
    scanf("%d",&year);


    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        if(month==12)
        {
            if(date==31)
            {
                next_d=1;
                next_m=1;
                next_y=year+1;
            }

            else{
                next_d= date+1;
                next_m=month;
                next_y=year;
            }
        }
           else{
                if(date==31)
                {
                    next_d=1;
                    next_m=month+1;
                    next_y=year;
                }
                else{
                    next_d = date+1;
                    next_m=month;
                    next_y=year;
                }
           }
    }
    else if(month==4 || month==6 || month==9 || month==11)

    {
        if(date= 30)
        {
            next_d = 1;
            next_m = month+1;
            next_y= year;
        }
        else{

        
            next_d = date+1;
            next_m= month;
            next_y= year;
         }
    }
    else
    {
        if(year%4==0)
        {
            if(date == 29)
            {
                next_d=1;
                next_m=month+1;
                next_y=year;


            }
            else{
                next_d = date+1;
                next_m= month;
                next_y=year;
            }
        }
            else{
                if(date==28)
                {
                    next_d = 1;
                    next_m= month+1;
                    next_y=year;

                }

                else{
                    next_d=date+1;
                    next_m = month;
                    next_y=year;
                }
            }
    }

    printf("\n\t Next DAte:  %d - %d -%d",next_d,next_m,next_y);
}