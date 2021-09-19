/* 1. Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.  
Test Data : -5
Expected Output :
The value of n = -1 */
#include<stdio.h>
int main()
{
    int m,n;
	//input---------------------------
    printf("Test Data: ");
    scanf("%d",&m);
	// condition and output-------------
    if (m < 0)
    
        printf("The value of n = -1",m);
    
    else if(m == 0)
    
        printf( "The valur of n = 0",m);
    
    else if (m > 0)
    
        printf(" The value of n = 1",m);
    
    return 0; 
}
	//Author- Rathin Kumar Gorai
	//Date-17/08/2021