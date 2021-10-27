/*If lengths of three sides of a triangle are input through the
keyboard,  area of the triangle */
#include<stdio.h>
#include<math.h>
// #include<conio.h>
int main()
{
    float a,b,c,s,area;
    printf("enter the sides length of traingle: ");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;

    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the traingle: %.2f",area);
    return 0;
}