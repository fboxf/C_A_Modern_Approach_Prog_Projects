/* Checks numbers for repeated digits */

#include <stdio.h>

int main (void)
{
	int digit_seen[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	int digit;
	long n ;

	printf("Enter a number: ");
	scanf("%ld",&n); 

	while (n > 0) 
	{
		digit = n % 10; 
		digit_seen[digit] += 1 ; 
		n /= 10; 
	}

	printf("Repeated digit: ");

	for ( int i = 0 ; i < 10 ; i++)
	{
		printf("%d is repeated %d times\n", i, digit_seen[i]);
	}

	return 0;
}
