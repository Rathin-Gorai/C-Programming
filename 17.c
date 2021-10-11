/*1. Write a program in C to calculate and print the Electricity bill of a given customer. The customer id., name and unit consumed by the user should be taken from the keyboard and display the total amount to pay to the customer. The charge are as follow: 
Unit	Charge/unit
upto 199						@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above					@2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill should be of Rs. 100/-
Test Data:
1001
James
800
Expected Output :
Customer IDNO :1001
Customer Name :James
unit Consumed :800
Amount Charges @Rs. 2.00 per unit : 1600.00
Surchage Amount : 240.00
Net Amount Paid By the Customer : 1840.00*/

#include<stdio.h>
int main()
{
    int c_id,unit;
    float amount_charge,surcharge,net_amount;
    char name[20];
    printf("Enter  the constomer id: ");
    scanf("%d", &c_id);
    printf("Enter the name of the costomer: ");
    scanf("%s", &name);
    printf("Enter unit consumed by costomer : ");
    scanf("%d", &unit);
    printf("unit Consumed : %d \n",unit);
    if (unit<200)
	{
		amount_charge=(unit*1.20);
		
		printf("Amount Charges @Rs. 1.20 per unit: %.2f", amount_charge);
	}
	else if (unit>=200 && unit<400)
	{
		amount_charge=(unit*1.50);
		if(amount_charge>=400){
		    surcharge=amount_charge*15/100;
		    if(surcharge<100){
		        surcharge=100;
		    }
		    printf("Amount Charges @Rs. 1.50 per unit: %.2f \n", amount_charge);
			printf("Surchage Amount : %.2f \n",surcharge);
			printf("Net Amount Paid By the Customer: %.2f ",surcharge+amount_charge);
		}else{
		    printf("Amount Charges @Rs. 1.50 per unit: %.2f ", amount_charge);
		}
	}
	else if (unit>=400 && unit<600)
	{
	    amount_charge= (unit*1.80);
			surcharge=amount_charge*15/100;
			printf("Amount Charges @Rs. 1.80 per unit : %.2f \n",amount_charge);
			printf("Surchage Amount : %.2f \n",surcharge);
			printf("Net Amount Paid By the Customer: %.2f ",surcharge+amount_charge);
	}
	else if (unit>=600)
	{
	    amount_charge=(unit*2.0);
		surcharge=amount_charge*15/100;
	        printf("Amount Charges @Rs. 2.00 per unit: %.2f \n", amount_charge);
	        printf("Surchage Amount : %.2f \n",surcharge);
	        printf("Net Amount Paid By the Customer: %.2f ",surcharge+amount_charge);
	}
}
