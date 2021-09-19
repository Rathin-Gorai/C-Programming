/*3. Write a C program to read roll no, name and marks of three subjects and calculate the total, percentage and division.  
Test Data :
Input the Roll Number of the student :784
Input the Name of the Student :James
Input the marks of Physics, Chemistry and Computer Application : 70 80 90
Expected Output :
Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First */

#include<stdio.h>
int main()
{
    char name[20];
    float percentage;
    int roll,p_marks,c_marks,ca_marks,total,division;
	//input---------------------------------------------
    printf("Input the Roll Number of the student:  ");
    scanf("%d", &roll);
    printf("Input the Name of the Student:  ");
    scanf("%s", &name);
    printf("Input the marks of Physics:  ");
    scanf("%d", &p_marks);
    printf("Input the marks of Chemistry:  ");
    scanf("%d", &c_marks);
    printf("Input the marks of Computer Application:  ");
    scanf("%d",&ca_marks);
	//calculate-----------------------------------------
    total=(p_marks+c_marks+ca_marks);
    percentage = ( total / 300.0)*100.0;
	//output-----------------------------------------
    printf("\n Roll no: %d", roll);
    printf("\n Name of Student : %s", name);
    printf("\n Marks in Physics: %d", p_marks);
    printf("\n Marks in Chemistry: %d", c_marks);
    printf("\n Marks in Computer Application: %d", ca_marks);
    printf("\n Total Marks: %d", total);
    printf("\n Percentage: %.2f \n", percentage);
	//condition an output-----------------------------------------
    if (percentage >= 60)
    {
        printf("Devision=First",division);
    }
    else if (percentage >=45 )
    {
        printf("Devision=Second",division);
    }
    else if (percentage >=33)
    {
        printf("Devision=Third", division);
    }
    else if (percentage<33)
    {
        printf("Devision=Fail", division);
    }
    return 0;
    
}
	//Author- Rathin Kumar Gorai
	//Date-17/08/2021