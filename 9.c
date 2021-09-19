/*4. Write a C program to find whether a given year is a leap year or not
Test Data : 2016
Expected Output :
2016 is a leap year.*/

#include<stdio.h>
int main()
{
    int year;
    printf("Test Data: ");
    scanf("%d", &year);
    if
    (year % 4 ==0)
    printf("%d is a leap year", year);
    else
    printf("%d is not a leap year", year);
}