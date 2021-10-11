/*3. Write a program in C to print day of week name using switch case
Test Data:
Input week number(1-7): 2

Expected Output :
Tuesday  */

#include<stdio.h>
int main()
{
	int number;
	printf("Test data: ");
	scanf("%d", &number);
	switch(number)
	{
	case 1:
	printf("Monday");
	break;
	case 2:
	printf("Tuesday");
	break;
	case 3:
	printf("Wednesday");
	break;
	case 4:
	printf("Thursday");
	break;
	case 5:
	printf("Friday");
	break;
	case 6:
	printf("Satarday");
	break;
	case 7:
	printf("Sunday");
	break;
	default:
	printf("Wrong Input");
	break;
	}
	return 0;
}