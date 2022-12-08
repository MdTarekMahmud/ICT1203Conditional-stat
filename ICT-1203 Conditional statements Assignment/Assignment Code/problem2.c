#include<stdio.h>
int main()
{
    int num;
    // top:
    printf("Enter number : ");
    scanf("%d",&num);

     if(num%2==0)
        printf("%d is an even integer\n",num);
    else
        printf("%d is an odd integer\n",num);
    // goto top;

    // return 0;
}