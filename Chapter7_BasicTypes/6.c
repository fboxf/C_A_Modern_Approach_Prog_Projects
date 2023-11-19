#include <stdio.h>

int main (void)
{
	printf("The value of int is:         %ld bytes\n", sizeof(int));	
	printf("The value of short is:       %ld bytes\n", sizeof(short));	
	printf("The value of long is:        %ld bytes\n", sizeof(long));	
	printf("The value of float is:       %ld bytes\n", sizeof(float));	
	printf("The value of double is:      %ld bytes\n", sizeof(double));	
	printf("The value of long double is: %ld bytes\n", sizeof(long double));	

	return 0;
}
