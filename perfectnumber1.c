#include<stdio.h>

int main()
{
	int num,i,ans;

	printf("Enter the Number: ");
	scanf("%d", &num);

	ans=0;

	for(i=1;i<num;i++)
		if (num%i==0)
		{
	{
		ans=ans+i;
	}
		}
		
		if (ans==num)
		{
			printf("%d is a Perfect Number.",num);
		}
		else 
		{
			printf("%d is not Perfect Number.", num);
		}
		

	return 0;
}