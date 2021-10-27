/*Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.*/
#include<stdio.h>
int main()
{
    float gross_sal, bacic_sal,dearness_allowance,house_rent;
    printf("Enter the basic sallery=");
    scanf("%f",&bacic_sal);
    dearness_allowance= 0.4*bacic_sal;
    house_rent= 0.2*bacic_sal;
    gross_sal= bacic_sal+dearness_allowance+house_rent;
    printf("The Total salary of Ramesh's is = %.2f",gross_sal);
    return 0;
}