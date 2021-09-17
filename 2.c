/*2. Write a C program that prints the perimeter of a rectangle to take its height and width as input.
Expected Output :
Input the height of the Rectangle : 5
Input the width of the Rectangle : 7
Perimeter of the Rectangle is : 24.000000

*/

#include<stdio.h>
int main()
{
    float height,wedth,perimeter;
    printf("Input the height of the Rectangle: ");  // input height
    scanf("%f", &height );
    
	printf("Input the width of the Rectangle: ");   //input width
    scanf("%f", &wedth);
    
	perimeter = 2 * (height+wedth);     //formula
    
	printf("Perimeter of the Rectangle is: = %f ", perimeter );     //reasut print 
    return 0;
}
 //Author- Rathin Kumar Gorai
 //Date-17/08/2021