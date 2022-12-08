/*21. Write a program in C to read any day number in integer and display day 
name in the word.*/
#include<stdio.h>
int main()
{
    int dayNo;
    top:
    printf("Enter the number of day : ");
    scanf("%d",&dayNo);

    if(dayNo==1)
        printf("Monday\n");
    else if(dayNo==2)
        printf("Tuesday\n");
    else if(dayNo==3)
        printf("Wednesday\n");
    else if(dayNo==4)
        printf("Thursday\n");
    else if(dayNo==5)
        printf("Friday\n");
    else if(dayNo==6)
        printf("Saturday\n");
    else if(dayNo==7)
        printf("Sunday\n");
    else
        printf("Invalid\n");
    goto top;
    return 0;
}