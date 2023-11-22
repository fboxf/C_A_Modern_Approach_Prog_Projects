/* Checks numbers for repeated digits */
#include <stdio.h>

int main (void)
{
	/* Each element represents a sum of each digit 0 through 9 */
	int digit_seen[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	int digit;
	long n ;

	printf("Enter a number (0 to quit): ");
	scanf("%ld",&n); 

	while (n > 0){

		while (n > 0) 
		{
			digit = n % 10; 
			digit_seen[digit] += 1 ; 
			n /= 10; 
		}

		printf("Digit:          0  1  2  3  4  5  6  7  8  9\n");
		printf("Occurrences:   ");
		for ( int i = 0 ; i < 10 ; i++)
		{
			printf(" %d ", digit_seen[i]);
		}

		printf("\n");
		printf("Enter another number (0 to quit): ");
		scanf("%ld",&n); 
	}

	return 0;
}
