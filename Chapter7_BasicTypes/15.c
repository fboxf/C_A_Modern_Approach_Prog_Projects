/* Compute factorial of positive integer */
#include <stdio.h>

short factorial(short);

int main (void){
	
	short user_input;

	printf("Enter a positive integer: ");
	scanf("%hd",&user_input);

	printf("%hd\n", factorial(user_input));

	return 0;
}

/* Function: compute factorial of positive integer
 * pre: x is defined
 * post: factorial of x */
short factorial(short x){
	while (x > 1){
		return x * factorial(x - 1);
	}
}
