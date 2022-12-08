/*14. Write a C program to check whether a triangle is Equilateral, Isosceles or 
Scalene.
*/
#include<stdio.h>
int main()
{
    int A,B,C;
    top:
    printf("Enter three sides of triangle : ");
    scanf("%d %d %d",&A,&B,&C);

    if(A==B && B==C && C==A)
        printf("This is an Equilateral triangle.");
    else if(A!=B && B!=C && C!=A)
        printf("This is an Scalene triangle.");
    if(((A==B) && (A!=C)) || ((C==B) && (A!=C)) || ((A==C) && (A!=B)))
        printf("This is an Isosceles triangle.\n");
        printf("\n");
    goto top;
    return 0;
}