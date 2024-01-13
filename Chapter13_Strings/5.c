/* Write a program that adds up its command line arguments,
 * which are assumed to be integers */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	int sum = 0;

	for (int i = 1; i < (argc); i++){
			sum += atoi(argv[i]);
	}

	printf("Program parameter's total = %d\n", sum);

	return 0;
}
