#include<stdio.h>

int main()
{
	int i,ans,num;

	ans=0;

	for(;;)
	{
		printf("Enter Data: ");
	    scanf("%d", &num);
		
		if(num<0)
		{
			break;
		}

		ans=ans+num;
	}

	printf("Addition of Numbers is %d .\n", ans);

	return 0;
}