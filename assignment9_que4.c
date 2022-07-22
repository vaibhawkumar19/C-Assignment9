//Write a menu driven program with the following options:
/*a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are  equilateral triangle
or not
d. Exit*/
#include<stdio.h>
int main()
{
	int a,b,c,choice;
	printf("enter 1 for to check isosceles triangle or not ");
	printf("\nenter 2 for to check right angled triangle or not ");
	printf("\nenter 3 for to check right angled triangle or not ");
	printf("\nenter 4 for exit ");
	printf("\nenter your Choice ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("enter lengths of sides 3 sides of tringle ");
		scanf("%d %d %d",&a,&b,&c);
		if(a==b || b==c || c==a)
			printf("Isosceles Tringle ");
		else
			printf("Not Isosceles tringle ");
	break;
	case 2:
		printf("enter lengths of sides 3 sides of tringle ");
		scanf("%d %d %d",&a,&b,&c);
		if(a*a==(b*b+c*c)|| b*b==(a*a+c*c) || c*c==(a*a+b*b))
			printf("Right angle Tringle ");
		else
			printf("Not right angle tringle ");
	break;
	case 3:
		printf("enter lengths of sides 3 sides of tringle ");
		scanf("%d %d %d",&a,&b,&c);
		if(a==b || b==c || a==c)
			printf("equilateral triangle Tringle ");
		else
			printf("not equilateral triangle tringle ");
	break;
		printf("exit");	
		}
	return 0;
	
}
