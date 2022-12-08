/*15. Write a C program to check whether a triangle can be formed by the given 
value for the angles.*/
#include<stdio.h>
int main()
{
    float a,b,c;
    top:
    printf("Enter three angles of a triangle : ");
    scanf("%f %f %f",&a,&b,&c);

    if((a+b+c)==180 && a!=0 && b!=0 && c!=0)
        printf("The triangle is valid.\n");
    else
        printf("The triangle is not valid.\n");
        
    goto top;

    return 0;
        
}