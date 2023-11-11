#include <stdio.h>	

int main (void)
{
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
	int first_sum;
	int second_sum;
	int check_digit;

	printf("Enter the first 12 digits of an EAN:");

	/* read no */
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
			&i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

	/* perfrom calc */
	first_sum = i2 + i4 + i6 + i8 + i10;
	second_sum = i1 + i3 + i5 + i7 + i9 + i11;

	check_digit = 9 - ((((first_sum * 3) + second_sum) - 1) % 10) ;

	/* output check digit */
	printf("Check digit: %d \n", check_digit);

	return 0;
}
