#include<stdio.h>

int main()
{
	int num;
	char ch;

	printf("Enter the Number: ");
	scanf("%d", &num);

	getchar(); // used for clearing keyboard/input buffer

	printf("Enter the Character: ");
	scanf("%c", &ch);

	printf("Your Number is %d and Character is %c", num,ch);

	
	return 0;
}