#include<stdio.h>

int main()
{
	int i,num;

	printf("Enter the Number: ");
	scanf("%d", &num);

	for(i=1;i<=num;i++)
	{
		if(i%3>0)
		{
			continue; // Continue skips the iteration. 
		}

		printf("%d \n", i);
	}

	if(num>0)
	{
		printf("These are all Numbers Divisible by 3 till %d .", num);
	}

	else if(num==0)
	{
		printf("Enter Number is Zero !!!");
	}

	else
	{
		printf("Invalid Input !!!");
	}

	return 0;
}
