//5. Convert the following if-else-if construct into switch case:
//if(var == 1)
//System.out.println("good");
//else if(var == 2)
//System.out.println("better");
//else if(var == 3)
//System.out.println("best");
//else
//System.out.println("invalid");
#include<stdio.h>
int main()
{
	int a,b,c,choice;
	printf("enter 1 for good ");
	printf("\nenter 2 for batter ");
	printf("\nenter 3 for best ");
	printf("\nenter 4 for invalid ");
	printf("\nenter your Choice ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("good");
	break;
	case 2:
		printf("Batter");
	break;
	case 3:
		printf("best");
	break;
		printf("invalid");	
		}
	return 0;
}
