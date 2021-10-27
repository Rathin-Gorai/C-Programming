/*The length and breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of
the circle. */
#include<stdio.h>
int main()
{
    float breadth,length,radius,area_ractangle,peremeter,area_circle,circumfrence;
    //rectangle input....................
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f",&breadth);
    //input circle..............
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    //process rentangle..............
    peremeter=2*(length+breadth);
    area_ractangle=length*breadth;
    //process circle.....................
    area_circle=3.14*radius*radius;
    circumfrence=2*3.14*radius;

    printf("\n-------------------------------------------------");
    printf("\nThe area of the rectangle: %.2f",area_ractangle);
    printf("\nThe Peremeter of the rectangle: %.2f",peremeter);
    printf("\nThe area of the circule: %.2f",area_circle);
    printf("\nThe circumference of the circule: %.2f",circumfrence);
    return 0;
}