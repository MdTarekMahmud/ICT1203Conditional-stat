
#include<stdio.h>
int main()
{
    int geoNO;
    float t_base,t_hight,c_radius,r_length,r_width,s_side;
    printf("Various Geometrical shape : \n");
    printf("1.Triangle\n2.Circle\n3.Rectangle\n4.Square\n");
    printf("Please select your disire Geometrical shape to calculate Area : ");
    scanf("%d",&geoNO);

    switch (geoNO)
    {
    case 1:
        printf("Enter the base of the triangle : ");
        scanf("%f",&t_base);
        printf("Enter the hight of the triangle : ");
        scanf("%f",&t_hight);
        printf("The area of the triangle is : %.2f",.5*t_base*t_hight);
        
        break;
    case 2:
        printf("Enter the radius of cicle : ");
        scanf("%f",&c_radius);
        printf("The area of the circle is : %.2f",3.1416*c_radius*c_radius);

        break;
    case 3:
        printf("Enter the length of the rectangle : ");
        scanf("%f",&r_length);
        printf("Enter the width of the rectangle : ");
        scanf("%f",&r_width);
        printf("The area of the Rectangle is : %.2f",r_length*r_width);

        break;
    case 4:
        printf("Enter the side of square : ");
        scanf("%f",&s_side);
        printf("The area of the Square is : %.2f",s_side*s_side);

        break;
    }

    return 0;
}