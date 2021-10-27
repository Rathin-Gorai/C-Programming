/* Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees.*/
#include<stdio.h>
int main()
{
    float Fahrenheit, Centigrade;
    printf("Enter the temprature in Fahrenhite: ");
    scanf("%f",&Fahrenheit);
    Centigrade=Fahrenheit-32;

    printf("The temprature in Centigrade: %.2f'c",Centigrade);
    return 0;
}