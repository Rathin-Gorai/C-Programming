/*2. Write a C program to find the largest of three numbers.  
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three
*/
#include<stdio.h>
int main()
{
    int a,b,c;
	//input-----------------------------
    printf("Enter the first number:  ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the Third Number:  ");
    scanf("%d", &c);
    printf(" 1st Number: %d", a);
    printf("\t \t 2nd Number: %d",b);
    printf("\t \t 3rd Number: %d",c);
	//condition and output-------------------------
    if (a>b && a>c)
    {
        printf("\n The 1st Number is the greatest among three ");
    }
    else if(b>a && b>c)
    {
        printf("\n The 2nd Number is the greatest among three ");
    }
    else if (c>a && c>b)
    {
        printf("\n The 3rd Number is the greatest among three");
    }
    return 0;
}
	//Author- Rathin Kumar Gorai
	//Date-17/08/2021 