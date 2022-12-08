/*24. Write a program in C to read any Month Number in integer and display the 
number of days for this month*/
#include<stdio.h>
int main()
{
    int monthNo;
    top:
    printf("Enter Number of month : ");
    scanf("%d",&monthNo);

    if(monthNo==1)
        printf("Month have 31 days\n");
    else if(monthNo==2)
        printf("Month have 28 days\n");
    else if(monthNo==3)
        printf("Month have 31 days\n");
    else if(monthNo==4)
        printf("Month have 30 days\n");
    else if(monthNo==5)
        printf("Month have 31 days\n");
    else if(monthNo==6)
        printf("Month have 30 days\n");
    else if(monthNo==7)
        printf("Month have 31 days\n");
    else if(monthNo==8)
        printf("Month have 31 days\n");
    else if(monthNo==9)
        printf("Month have 30 days\n");
    else if(monthNo==10)
        printf("Month have 31 days\n");
    else if(monthNo==11)
        printf("Month have 30 days\n");
    else if(monthNo==12)
        printf("Month have 31 days\n");
    else
        printf("Invalid\n");
    goto top;
    return 0;
}