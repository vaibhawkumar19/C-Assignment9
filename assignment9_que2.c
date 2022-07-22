//2. Write a menu driven program with the following options:
//a. Addition
//b. Subtraction
//c. Multiplication
//d. Division
//e. Exit
#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("senter 1 for addition ");
	printf("\nenter 2 for subtraction ");
	printf("\nenter 3 for multiplication ");
	printf("\nenter 4 for division ");
	printf("\nenter 5 for exit ");
	printf("\nenter your Choice ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter the two no ");
			scanf("%d %d",&a,&b);
			printf("Addition %d",a+b);
		break;
		case 2:
			printf("enter the two no ");
			scanf("%d %d",&a,&b);
			printf("subtraction %d",a-b);
		break;
		case 3:
			printf("enter the two no ");
			scanf("%d %d",&a,&b);
			printf("multiplication %d",a*b);
		break;
		case 4:
			printf("enter the two no ");
			scanf("%d %d",&a,&b);
			printf("division of %d",a/b);
		break;
			printf("exit");
	}
	return 0;
}
