#include<stdio.h>
void main()
{
    float radius,diameter,circumference,area,pi=3.14;
    printf("Enter the radius of a circle:");
    scanf("%f",&radius);
    diameter=radius*2;
    circumference=2*pi*radius;
    area=pi*radius*radius;
    printf("The diameter of the circle is=%f",diameter);
    printf("\nThe circumference of the circle is=%f",circumference);
    printf("\nThe area of the circle is=%f",area);
    getch();
}