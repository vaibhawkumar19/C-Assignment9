//8. Program to convert a positive number into a negative number and negative number into a positive
// number using a switch statement.
#include<stdio.h>
int main()
{
	int n,exc;
	int choice;
	printf("choice one for negative to posative\n");
	printf("choice two for posative to negative\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter any number(+/-) ");
			scanf("%d",&n);
			exc=-n;
			printf("%d",exc);
		break;
		case 2:
			printf("enter any number(+/-) ");
			scanf("%d",&n);
			exc=-n;
			printf("%d",exc);
		break;
	}
}
