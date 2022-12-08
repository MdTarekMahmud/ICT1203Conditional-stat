#include<stdio.h>
int main()
{
    char grade;
    printf("\n\nGrade and equivaleent description: \nE = Excellent\nV = Very Good\nG = Good\nA = Average\nF = Fail\n");
    printf("Enter your grade : ");
    scanf("%c",&grade);

    if(grade=='E')
        printf("You have chosen : Excellent");
    else if(grade=='V')
        printf("You have chosen : Very Good");
    else if(grade=='G')
        printf("You have chosen : Good");
    else if(grade=='A')
        printf("You have chosen : Avarage\n\n");
    else if(grade=='F')
        printf("You have chosen : Fail");
    else
        printf("Invalid");
    
    return 0;
}
