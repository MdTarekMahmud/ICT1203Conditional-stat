/*12. Write a C program to read roll no, name and marks of three subjects and 
calculate the total, percentage and division.*/
#include<stdio.h>
int main()
{
    int roll;
    char name[60];
    int phy,che,comApk,total;
    top:

    printf("Enter Roll Number of the student: ");
    scanf("%d",&roll);
    printf("Enter the Name of the Student: ");
    scanf("%s",&name);
    printf("Enter the marks of Physics, Chemistry and Computer Application :",phy,che,comApk);
    scanf("%d %d %d",&phy,&che,&comApk);

    printf("Roll No : %d\n",roll);
    printf("Name of Student : %s \n",name);
    printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Computer Application : %d\n",phy,che,comApk);
    
    total = phy+che+comApk;
    float percentage =(float) total/3;
    printf("Total marks = %d\n",total);
    printf("Percentage = %.2f\n",percentage);
    //Division
    if(percentage>59)
        printf("Division = First\n");
    else if(percentage>45)
        printf("Division = sencond\n");
    else
        printf("Division = Third\n");
    goto top;

    return 0;
}