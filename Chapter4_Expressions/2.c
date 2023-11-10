#include <stdio.h> 

int main (void)
{
	int digit_to_reverse, left_to_right_digit, right_to_left_digit,
		middle_digit;

	printf("Enter a three digit number:");
	scanf("%d", &digit_to_reverse);

	left_to_right_digit = (digit_to_reverse - (digit_to_reverse % 100)) / 100;
	right_to_left_digit = (digit_to_reverse % 100) % 10;
	middle_digit = ((digit_to_reverse % 100) - digit_to_reverse % 10) / 10;

	printf("The reversal is: %d%d%d", 
			right_to_left_digit,
			middle_digit,
			left_to_right_digit);

	return 0;
}

