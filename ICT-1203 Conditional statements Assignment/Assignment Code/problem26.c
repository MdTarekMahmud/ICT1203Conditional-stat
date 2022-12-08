/*26. Write a program in C which is a Menu-Driven Program to perform a simple 
calculation.*/
#include<stdio.h>
int main()
{
    int calNo;
    float num1,num2;
    top:
    printf("Enter the Two numbers : ");
    scanf("%f %f",&num1,&num2);
    printf("Calculation type : \n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Please select your disire Calculation Type : ");
    scanf("%d",&calNo);

    switch (calNo)
    {
    case 1:
       printf("The Addition of %.0f and %.0f is : %.0f\n",num1,num2,num1+num2);
        
        break;
    case 2:
        printf("The Subraction of %.0f and %.0f is : %.0f\n",num1,num2,num1-num2);
        
        break;
    case 3:
        printf("The Multiplication of %.0f and %.0f is : %.0f\n",num1,num2,num1*num2);
        
        break;
    case 4:
        printf("The Division of %.2f and %.2f is : %.2f\n",num1,num2,num1/num2);
        
        break;
    default:
        break;
    }
    goto top;

    return 0;
}