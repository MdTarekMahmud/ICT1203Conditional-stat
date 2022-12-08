#include<stdio.h>
int main()
{
    int monthNo;
    top:
    printf("\n\nEnter Number of month : ");
    scanf("%d",&monthNo);

    if(monthNo==1)
        printf("January\n");
    else if(monthNo==2)
        printf("February\n");
    else if(monthNo==3)
        printf("March\n");
    else if(monthNo==4)
        printf("April\n");
    else if(monthNo==5)
        printf("May\n");
    else if(monthNo==6)
        printf("June\n");
    else if(monthNo==7)
        printf("July\n");
    else if(monthNo==8)
        printf("August\n");
    else if(monthNo==9)
        printf("September\n");
    else if(monthNo==10)
        printf("October\n");
    else if(monthNo==11)
        printf("November\n");
    else if(monthNo==12)
        printf("December\n");
    else
        printf("Invalid\n");
    goto top;
    return 0;
}