#include<stdio.h>
int main()
{
    int num;
    top:
    printf("Enter number : ");
    scanf("%d",&num);

     if(num>0)
        printf("%d is a positive number\n",num);
    else if(num<0)
        printf("%d is a negative number\n",num);

    goto top;

    // return 0;
}