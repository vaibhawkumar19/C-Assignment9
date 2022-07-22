//1. Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main()
{
	int n;
	printf("enter any Month Number ");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
		printf("31 day in January");
	break;
	case 2:
		printf("28 or 29 day in feburary");
	break;
	case 3:
		printf("31 day in march");
	break;
	case 4:
		printf("30 day in April");
	break;
	case 5:
		printf("31 day in May");
	break;
	case 6:
		printf("30 day in June");
	break;
	case 7:
		printf("31 day in july");
	break;
	case 8:
		printf("31 day in August");
	break;
	case 9:
		printf("30 day in september");
	break;
	case 10:
		printf("31 day in October");
	break;
	case 11:
		printf("30 day in november");
	break;
	case 12:
		printf("31 day in December");
	break;
		printf("Invalid Choice");	
}}
