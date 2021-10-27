/* If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits. (Hint: Use the modulus
operator ‘%’) */
#include<stdio.h>
int main()
{
    float a,b,c,d,e,sum;
    printf("Enter the number one by one: ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    printf("The sum of the five numbers: %.2f",sum);
    return 0;
}