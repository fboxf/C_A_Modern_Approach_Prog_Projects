/* Write a function that computes the value of the following 
 * polynomial:    */
#include <stdio.h>

long calc_pol (long);

int main (void){
	long i; 
	
	printf("Please enter a value of x: ");
	scanf("%ld",&i);

	printf("Value: %ld", calc_pol(i));
	
	return 0;
}

long calc_pol (long x){
	return (3 * (x * x * x * x * x)) + (2 * ( x * x * x * x)) -	(5 * (x * x * x) ) - (x *= 2) + (7 * x) - 6;
}
