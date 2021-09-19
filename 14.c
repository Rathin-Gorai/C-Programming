/*4. Write a C program to read temperature in centigrade and display a suitable message according to temperature state below :  
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
Test Data :
42
Expected Output :
Its very hot.*/
#include<stdio.h>
int main()
{
    int temp;
	//input--------------------------------
    printf("Test data:  ");
    scanf("%d",&temp);
	//condition and output------------------------
    if (temp <0)
    {
        printf("Freezing weather", temp);
    }
    else if (temp < 10)
    {
        printf("Very Cold weather", temp);
    }
    else if (temp <20)
    {
        printf("Cold weather", temp);
    }
    else if (temp < 30)
    {
        printf("Normal tempreture", temp);
    }
    else if (temp<40)
    {
        printf("Its hot", temp);
    }
    else if(temp > 40)
    {
        printf("Its very hot", temp);
    }
    return 0;
}
	//Author- Rathin Kumar Gorai
	//Date-17/08/2021