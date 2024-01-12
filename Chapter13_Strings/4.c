/* Write a program that reverses the command line arguments
 * given to it */
#include <stdio.h>

int main (int argc, char *argv[]){
	int numberOfArguments = argc - 1;

	// printf("The number of arguments is %d\n", numberOfArguments);

	while (numberOfArguments > 0){
		printf("%s ", argv[numberOfArguments]);
		numberOfArguments--;
	}
	printf("\n");

	return 0;
}
