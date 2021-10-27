/* If a five-digit number is input through the keyboard, write a
program to reverse the number. */
#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter the five numbers one by one: ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    printf("The numbers in reverse: %.2f, %.2f, %.2f, %.2f, %.2f",e,d,c,b,a);
    return 0;
}