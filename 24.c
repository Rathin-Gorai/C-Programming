/*3. Write a program in C to display the multiplication table of a given integer.
Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 10 = 150
*/
#include <stdio.h>  
int main()  
{  
    int i,j,k;  
    printf("enter the value of i= ");
    scanf("%d", &i);
    for(i,j=1,k=1;j<=10;j++)  
    {  
        k=i*j;
        printf("%d X %d = %d\n",i,j,k);     
    }  
}  
