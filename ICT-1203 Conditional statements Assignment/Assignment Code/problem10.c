/* 10. Write a C program to find the eligibility of admission for a professional course 
 based on the following criteria:*/
#include<stdio.h>
int main()
{
    int math,phy,che;
    int total_MPC;  //MPC=math + phy + Chy
    int total_MP;   // MP = math + phy
    printf("Input the marks obtained in Physics :");
        scanf("%d",&phy);
    printf("Input the marks obtained in Chemistry :");
        scanf("%d",&che);
    printf("Input the marks obtained in Mathematics :");
        scanf("%d",&math);
    total_MPC = math+phy+che;
    total_MP = math+phy;

    printf("Total marks of Maths, Physics and Chemistry :%d\nTotal marks of Maths and Physics : %d\n",total_MPC,total_MP);
    
    if((math>=65 && phy>=55 && che>=50 && total_MPC>=190) || total_MP>=140)
        printf("The candidate is eligible for admission.\n");
    else
        printf("The candidate is not eligible for admission.\n");


    return 0;
}