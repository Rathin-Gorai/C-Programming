/*Write a C program to perform addition, subtraction, multiplication and  division of two numbers. Go to the editor
Expected Output :
The sum of the given numbers : 15
The difference of the given numbers : 5
The product of the given numbers : 50
The quotient of the given numbers : 2.000000
*/

#include<stdio.h>
int main()
{
    int a,b,add,sub,multi;
    float div;
	//input----------------------------
    printf("Enter the First number: ");
    scanf("%d", &a);
    printf("Enter the Second Number: ");
    scanf("%d", &b );
	//process---------------------------
    add=(a+b);
    sub=(a-b);
    div=(a/b);
    multi=(a*b);
	//output--------------------------------------------------
    printf("\n The sum of the given numbers: %d", add);
    printf("\n The difference of the given numbers: %d",sub);
    printf("\n The product of the given numbers: %d",multi);
    printf("\n The quotient of the given numbers: %f", div);

}
	//Author- Rathin Kumar Gorai
	//Date-17/08/2021