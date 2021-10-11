/*5. Write a C program to check whether an alphabet is a vowel or consonant.  
Test Data :
k
Expected Output :
The alphabet is a consonant.*/

#include<stdio.h>
int main()
{
    char alphabet,a,e,i,o,u;
    printf("Test Data=  ");
    scanf("%c", &alphabet);
    if 
    (alphabet = ('a' || 'e' || 'i' || 'o' || 'u' ))
    {
        printf(" The alphabet is vowel ", alphabet);
    }
    else
    {
        printf(" The alphabet is consonent  ", alphabet);
    }
    return 0;
}