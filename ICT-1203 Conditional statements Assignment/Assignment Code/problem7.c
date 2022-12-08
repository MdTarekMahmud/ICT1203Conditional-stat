/*7. Write a C program to accept the height of a person in centimeter and 
 categorize the person according to their height.*/
 #include<stdio.h>
 int main()
 {
    int height;
    printf("Enter your height in centimeter : ");
    scanf("%d",&height);

    if(height<148)
        printf("The person is Dwarf.\n");
    else if(height >=148 && height<187)
        printf("The person is Normal(Avarage).\n");
    else if(height>=187)
        printf("The person is Tall.\n");

    return 0;
 }