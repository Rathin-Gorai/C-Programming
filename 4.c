/*Write a program in C that reads a forename, surname and year of birth and display the names and the year one after another sequentially.
Expected Output :
Input your firstname: Tom
Input your lastname: Davis
Input your year of birth: 1982
Tom Davis 1982
*/

#include<stdio.h>
int main()
{
    char firstname[20],lastname[20],year_of_birth[20];
	//input--------------------------------------------
    printf("\n Input your firstname: ");
    scanf("%s", &firstname);
    printf("Input your lastname: ");
    scanf("%s", &lastname);
    printf("Input Year of Birth: ");
    scanf(" %s", &year_of_birth);
	//output-------------------------------------------
    printf(" %s", firstname );
    printf(" %s", lastname);
    printf(" %s", year_of_birth ); 
    return 0;
}

	//Author- Rathin Kumar Gorai
	//Date-17/08/2021