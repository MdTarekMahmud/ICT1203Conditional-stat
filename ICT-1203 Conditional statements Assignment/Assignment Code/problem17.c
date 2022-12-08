/*17. Write a C program to check whether an alphabet is a vowel or consonant.
Test Data :*/
#include<stdio.h>
int main()
{
    char ch;
    up:
    printf("Enter any Alphabet : ");
    scanf("%c",&ch);

    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    printf("The alphabet is a Vowel\n");
    else
    printf("The alphabet is a consonant\n");

    if(1)
    goto up;
}