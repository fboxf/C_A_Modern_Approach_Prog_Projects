#include <stdio.h> 

int main (void)
{
	long int digit_to_reverse;

	printf("Enter an integer:");
	scanf("%ld", &digit_to_reverse);

	do {
		printf("%ld",digit_to_reverse % 10);
		digit_to_reverse = digit_to_reverse / 10;
	} while (digit_to_reverse > 0);

	return 0;
}

