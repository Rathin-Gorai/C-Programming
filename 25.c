/*4. Write a program in C to display the n terms of odd natural number and their sum .
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100
*/
#include<stdio.h>
int main()
{
    int i,n=0,sum=0;
    printf("Input number of terms :");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)  
   {
	printf("%d ",i);
    sum=(sum+i);
   }
   printf("\n sum of nuturals numbers= %d",sum);
   return 0;
}