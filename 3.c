/*Write a C program that takes hours and minutes as input, and calculates the total number of minutes.
Expected Output :
Input hours: 5
Input minutes: 37
Total: 337 minutes
*/

#include<stdio.h>
int main()
{
    int minutes,hours;
    printf("Input hours: ");//hour
    scanf("%d", &hours );
    
	printf("Input minutes: "); //minutes
    scanf("%d" , &minutes );
    
	minutes=(hours*60)+minutes;//formula
    
	printf("Total= %d minutes", minutes );//reasult
}
	//Author- Rathin Kumar Gorai
	//Date-17/08/2021