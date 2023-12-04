/* Information on gcd from:
 * https://thepronotes.com/c-program-to-find-gcd-of-two-numbers-using-iterative-euclids-algorithm/ */
#include <stdio.h>
void reduce (int numerator, int denominator, 
		int *reduced_numerator, int *reduced_denominator); 
		
int main (void){
	int numerator, denominator, reduced_numerator, reduced_denominator;

	printf("Enter a fraction:");
	scanf("%d/%d", &numerator, &denominator);

	reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
	printf("This fraction in its lowest terms is %d/%d", 
			reduced_numerator, reduced_denominator);

	return 0;
}

void reduce (int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){
	int gcd, temp;

	*reduced_numerator = numerator;
	*reduced_denominator = denominator;

	if (numerator == 0){
		gcd = denominator;
	} else if (denominator == 0){
		gcd = numerator;
	} else {
		while (denominator != 0){ 
			temp = numerator % denominator;
			numerator = denominator;
			denominator = temp;
		}
	}

	gcd = numerator;

	*reduced_numerator /= gcd;
	*reduced_denominator /= gcd;

}	

