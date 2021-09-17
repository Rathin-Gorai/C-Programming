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
     //input
    printf(" Input a temperature (in Centigrade):  ");
    scanf("%f", &centigrade);
    //formula
    fahrenheit=(centigrade*9/5)+32; 
    //output
    printf(" fahrenheit= %f", fahrenheit); 
    return 0;
}
