/*16. Write a C program to check whether a character is an alphabet, digit or 
special character.*/
#include<stdio.h>
int main()
{
    char ch;
    // top:
    printf("Enter a character : ");
    scanf("%c",&ch);

    if(ch>= '0' && ch <= '9')
       {
         printf("This is a Digit.\n");
       }

    else if ((ch>= 'a' && ch<= 'a') || (ch>= 'A' && ch<= 'Z'));
      {
          printf("This is an Alphabet.\n");
      }

    else
    {
         printf("This is a special character.\n");
        }

    // goto top;
    return 0;
}