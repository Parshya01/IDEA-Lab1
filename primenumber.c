#include<stdio.h>

int main()
{
	int num,i,ans;
	printf("Enter the Number: ");
	scanf("%d", &num);

	if (num==2 || num==3 || num==5 || num==7)
	{
		printf("%d is Prime Number.",num);

	}

	else if (num%2==0 || num%3==0 || num%5==0 || num%7==0)
	{
		printf("%d is a not Prime Number.",num);
	}
	else
	{
		printf("%d is  Prime Number.", num);
	}

	return 0;
}