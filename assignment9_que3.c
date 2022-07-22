//3. Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
int main()
{
	int n;
	printf("enter any any Number of a week ");
	scanf("%d",&n);
	switch(n)
	{
	case 1:
		printf("welcome to monday");
	break;
	case 2:
		printf("day is very beauriful");
	break;
	case 3:
		printf("sunny day ");
	break;
	case 4:
		printf("cloudy day");
	break;
	case 5:
		printf("welcome to weekend");
	break;
	case 6:
		printf("enjoy");
	break;
	case 7:
		printf("relax in sunday");
	break;
		printf("invalid day");
	}
	return 0;
}
