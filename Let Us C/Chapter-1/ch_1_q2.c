/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters */
#include<stdio.h>
int main()
{
    float distance,meter,feet,inches,centimeter;
    printf("Enter the distence between two cities in KM= ");
    scanf("%f",&distance);

    meter = (distance*1000);
    feet = (3.28*meter);
    centimeter = (30.48*feet);
    printf("\n--------------------------------------------------------");
    printf("\nThe distance of two cities in km= %.2f",distance);
    printf("\nThe distance of two cities in meter= %.2f",meter);
    printf("\nThe distance of two cities in feet= %.2f",feet);
    printf("\nThe distance of two cities in centimeter= %.2f",centimeter);
    printf("\n--------------------------------------------------------");
    return 0;
}