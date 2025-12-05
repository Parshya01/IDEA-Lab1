#include<stdio.h>

int main()
{
	int num;
	printf("Enter the Number: ");
	scanf("%d", &num);

	if (num>=0)
	{
		printf("The %d is Whole Number", num);
	}
	else
	{
		printf("The %d is not Whole Number", num);
	}

	return 0;
}