/*4. Write a program in C to create calculator using switch case and functions
Test Data:
Enter the value 1: 20
Enter the value 2: 60
Enter the operation want to perform: +


Expected Output :
Sum is: 80
 */
 #include<stdio.h>
 int main()
 {
	 float a,b,value;
	 char operation;
	 printf("Enter the value of 1: ");
	 scanf("%f", &a);
	 printf("Enter the value of 2: ");
	 scanf("%f", &b);
	 printf("Enter the operation want to perform: ");
	 scanf("%s", &operation);
	if (operation == '+')
	{
		value= (a + b);
		printf("Sum is: %.2f ", value);
	}
	else if (operation == '-')
	{
		value=(a-b);
		printf("Subtract value is: %.2f", value);
	}
	else if (operation =='*')
	{
		value=(a*b);
		printf("Multiplication value: %.2f", value);
	}
	else if ( operation =='/')
	{
		value=(a/b);
		printf("Devision value: %.2f", value);
	}
	 return 0;
 }
		 
	 