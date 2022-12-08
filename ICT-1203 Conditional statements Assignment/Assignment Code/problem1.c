#include<stdio.h>
int main()
{
    int num1,num2;
    // top:
    printf("Enter number1 : ");
    scanf("%d",&num1);
    printf("Enter number2 : ");
    scanf("%d",&num2);

    if(num1==num2)
        printf("Number1 and Number2 are equal.\n");
    else
        printf("Number1 and Number2 are Not equal.\n");
    // goto top;

    // return 0;
}