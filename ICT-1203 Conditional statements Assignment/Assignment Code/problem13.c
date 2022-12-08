/*13. Write a C program to read temperature in centigrade and display a suitable 
message according to temperature state below :*/
#include<stdio.h>
int main()
{
    float temp;
    top:
    printf("Enter the Temperature : ");
    scanf("%f",&temp);
    printf("Test Data: %.2f\n",temp);

    if(temp<0)
        printf("Freezing weather\n");
    if(temp>=0 && temp<=10)
        printf("Very Cold weather\n");
    if(temp>10 && temp<21)
        printf("Cold weather\n");
    if(temp>20 && temp<31)
        printf("Normal in Temp\n");
    if(temp>30 && temp<40)
        printf("Its Hot\n");
    if(temp>=40)
        printf("Its Very Hot\n");

    goto top;
    return 0;
}