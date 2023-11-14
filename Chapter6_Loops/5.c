#include <stdio.h> 

int main (void)
{
	long int digit_to_reverse;

	printf("Enter an integer:"); /* for example 345 */
	scanf("%ld", &digit_to_reverse);

	do {
		printf("%ld",digit_to_reverse % 10); /* First 5 >>>> then 4 >>>> then 3 >>>> end */
		digit_to_reverse = digit_to_reverse / 10; /* 345 >>>> 34 >>>> 3*/
	} while (digit_to_reverse > 0);

	return 0;
}

