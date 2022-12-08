#include<stdio.h>
int main()
{
    int age;
    // top:
    printf("Enter your age : ");
    scanf("%d",&age);

    if(age<18)
      printf("Sorry! You are not eligible for casting your vote\n");

    else
       printf("Congratulation! You are eligible for casting your vote\n");
    // goto top;
    // return 0;
}