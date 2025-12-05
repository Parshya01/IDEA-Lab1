#include<stdio.h>

int main()
{
	int a,b;
	char option;

	printf("Enter the First Number: ");
	scanf("%d", &a);

	printf("Enter the Second  Number: ");
	scanf("%d", &b);

	getchar();

	printf("Enter the Operator(=,-,*,/) : ");
	scanf("%c", &option);

	if (option=='+')
	{
		printf("Addition of %d and %d is %d",a,b,a+b);
	}
	else if (option=='-')
	{
		printf("Substraction of %d and %d is %d",a,b,a-b);
	}
	else if (option=='*')
	{
		printf("Mupltipltion of %d and %d is %d",a,b,a*b);
	}
	else if (option=='/')
	{
		printf("Division of %d and %d is %d",a,b,a/b);
	}
	else 
	{
		printf("********* You Entered Wrong Operator !! ***********");
	}
	return 0;
}