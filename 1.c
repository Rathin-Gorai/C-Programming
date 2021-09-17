/*
Write a program that converts Centigrade to Fahrenheit.
Expected Output :
Input a temperature (in Centigrade): 45
113.000000 degrees Fahrenheit       
*/

#include<stdio.h>
int main()
{
    float centigrade,fahrenheit;
    printf(" Input a temperature (in Centigrade):  "); //input
    scanf("%f", &centigrade);
    fahrenheit=(centigrade*9/5)+32; //formula
    printf(" fahrenheit= %f", fahrenheit); //output
    return 0;
}