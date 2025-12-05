#include<stdio.h>

int main()
{
	int i;

	i=1;

	ABC : if (i>3)
	{
		goto TCA;
	}
	printf("Hello World ! \n");
	i++;
	goto ABC;

	TCA : printf("BYE !! ");

	return 0;

}