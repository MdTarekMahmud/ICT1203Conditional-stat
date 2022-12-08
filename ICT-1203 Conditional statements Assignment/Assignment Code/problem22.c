/*22. Write a program in C to read any digit, display in the word.
Test Data :*/
#include<stdio.h>
int main()
{
    int digit;
    top:
    printf("Enter Digit : ");
    scanf("%d",&digit);

    if(digit==0)
        printf("Zero\n");
    else if(digit==1)
        printf("One\n");
    else if(digit==2)
        printf("Two\n");
    else if(digit==3)
        printf("Three\n");
    else if(digit==4)
        printf("Four\n");
    else if(digit==5)
        printf("Five\n");
    else if(digit==6)
        printf("Six\n");
    else if(digit==7)
        printf("Seven\n");
    else if(digit==8)
        printf("Eight\n");
    else if(digit==9)
        printf("Nine\n");
    else
        printf("Invalid\n");
    goto top;
    return 0;
}