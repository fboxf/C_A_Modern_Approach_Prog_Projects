#include <stdio.h>

int main (void)
{
	int two_digit_number;
	printf("Enter a two-digit number: ");
	scanf("%d",&two_digit_number);

	char ptr_array_tens[8][8] = {"twenty","thirty" ,"forty","fifty","sixty","seventy","eighty","ninety"};
	char ptr_array_ones[10][6] = {"","one","two","three","four","five","six","seven","eight","nine"};
	char ptr_eleven_nineteen[9][10] = {"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	if (two_digit_number > 19)
	{
		int tens_digit = two_digit_number / 10;
		int ones_digit = two_digit_number % 10;

		printf("%s", ptr_array_tens[tens_digit - 2]);
		printf("-%s\n", ptr_array_ones[ones_digit]);

	} 
	else if (two_digit_number > 10)
	{
		printf("%s\n", ptr_eleven_nineteen[two_digit_number - 11]);

	}
	else
	{
		printf("%s\n", ptr_array_ones[two_digit_number]);
	}
	return 0;
}
