/*If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100. */
#include<stdio.h>
int main()
{
    float maths,phy,chem,histry,english,total,percentage;
    printf("Enter the number of Maths: ");
    scanf("%f",&maths);
    printf("Enter the number of Physics: ");
    scanf("%f",&phy);
    printf("Enter the number of Chemistry: ");
    scanf("%f",&chem);
    printf("Enter the number of Histry: ");
    scanf("%f",&histry);
    printf("Enter the number of English: ");
    scanf("%f",&english);

    total=maths+phy+chem+histry+english;
    percentage=total/500*100;

    printf("\n--------------------------------------------");
    printf("\nTotal marks obtains: %.2f",total);
    printf("\nPercentage marks of the student: %.2f",percentage);
    printf("\n--------------------------------------------");
    return 0;
}