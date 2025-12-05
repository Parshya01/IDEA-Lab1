#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num,i;

	printf("Enter the Numner: ");
	scanf("%d", &num);

	for(i=2;i<num;i++) // 6
		if(num%i==0)
	{
		break;
	}
	if (num==i)
	{
		printf("%d is Prime Number. ", num);
	}
	else 
	{
		printf("%d is not Prime Number. ", num);
	}
	return 0;
}