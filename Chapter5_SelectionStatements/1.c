#include <stdio.h>

int main (void)
{
	int a_number;

	printf("Enter a number: ");
	scanf("%d",&a_number);

	if (a_number <= 9)
	{
		printf("The number has 1 digit\n");
	}
	else if (a_number <= 99)
	{
		printf("The number has 2 digits\n");
	}
	else if (a_number <= 999)
	{
		printf("The number has 3 digits\n");
	}
	else if (a_number <= 9999)
	{
		printf("The number has 4 digits\n");
	}

	return 0;
}
