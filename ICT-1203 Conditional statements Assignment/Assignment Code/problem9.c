// 9. Write a C program to accept a coordinate point in a XY coordinate system and 
// determine in which quadrant the coordinate point lies.
#include<stdio.h>
int main()
{
    int X,Y;
    printf("Enter the value of  X and Y : ");
    scanf("%d %d",&X,&Y);
    printf("Test Data : %d %d\n",X,Y);

    if (X>0 && Y>0)
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n",X,Y);
    else if (X<0 && Y>0)
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n",X,Y); 
    else if (X<0 && Y<0)
        printf("The coordinate point (%d,%d) lies in the Third quadrant.\n",X,Y);
    else if (X>0 && Y<0)
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n",X,Y);
    else if ((X>0 && Y==0) || (X<0 && Y==0))
        printf("The coordinate point (%d,%d) lies in the X axis.\n",X,Y);
    else if ((Y>0 && X==0) || (Y<0 && X==0))
        printf("The coordinate point (%d,%d) lies in the Y axis.\n",X,Y);
    else if (X==0 && Y==0)
        printf("The coordinate point (%d,%d) lies in the Origin.\n",X,Y);

    return 0;
}