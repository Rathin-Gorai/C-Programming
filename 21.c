/*5. Write a program in C to check vowel or consonant using switch case.
Test Data:
Enter a Character: e

Expected Output :
It’s a Vowel   */
#include<stdio.h>
int main()
{
	char a,e,i,o,u,character;
	printf("Enter the Character: ");
	scanf("%c", &character);
	switch(character)
	{
		case 'a':
		printf("It is a vowel");
		break;
		case 'e':
		printf("It is a vowel");
		break;
		case 'i':
		printf("It is a vowel");
		break;
		case 'o':
		printf("It is a vowel");
		break;
		case 'u':
		printf("It is a vowel");
		break;
		default:
		printf("It is a consonant");
		break;
	}
}