#include<stdio.h>
int main()
{
    int year;
    // top:
    printf("Enter Year : ");
    scanf("%d",&year);

    if((year%400==0) || (year%100!=0 && year%4==0))
        printf("%d is a leap year\n",year);
    else
        printf("%d is Not a leap year\n",year);
    // goto top;
    // return 0;
}