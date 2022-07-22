/*7.write a Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include<stdio.h>
int main()
{
	int a;
	float total;
	printf("enter the number ");
	scanf("%d",&a);
	switch(a)
	{
		case 1 ... 50:
			 total=(a*0.50);
			 total=total+total*20/100;
			 printf("%f",total);
		break;
		case 51 ... 150:
			total=(a*0.75);
			total=total+total*20/100;
			printf("%f",total);
		break;
		case 151 ... 251:
			total=(a*1.20);
			total=total+total*20/100;
			printf("%f",total);
		break;
		default:
			total=(a*1.50);
			total=total+total*20/100;
			printf("%f",total);
		 }
return 0;
}

