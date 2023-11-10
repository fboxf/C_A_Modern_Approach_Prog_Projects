#include <stdio.h> 

int main (void)
{
	int digit_to_reverse, left_to_right_digit, right_to_left_digit;

	printf("Enter a two digit number:");
	scanf("%d", &digit_to_reverse);

	left_to_right_digit = digit_to_reverse / 10;
	right_to_left_digit = digit_to_reverse % 10;

	printf("The reversal is: %d%d", 
			right_to_left_digit,
			left_to_right_digit);

	return 0;
}

