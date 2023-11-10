#include <stdio.h>	

int main (void) 
{
	int decimal_to_octal;

	printf("Enter a number between 0 and 32767:");
	scanf("%d",&decimal_to_octal);

	printf("In octal, your number is %.5o",decimal_to_octal);

	return 0;
}
