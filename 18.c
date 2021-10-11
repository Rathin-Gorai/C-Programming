/*2. Write a program in C to read any Month Number in integer and display Month name in the word. 
Test Data :
4
Expected Output :
April
*/

#include<stdio.h>
int main()
{
    int number=0;
    printf("Test data: ");
    scanf("%d",&number);
    switch (number)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("Wrong Input!!");
        break;
    }
    return 0;
}