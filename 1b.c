
/* a) Write a program that reads , then prints the reversal of the message.
 * Read the message one charcater at a time (using getchar) and store the
 * characters in an array. Stope reading when the array is full of the character 
 * read is '\n'
 *
 * b) Revise the program to use a pointer instead of an integer to keep track 
 * of the current position in the array*/
#include <stdio.h>

#define N 20

int main (void){
	char ch, message[N], * array_ptr;
	
	array_ptr = &message[0];

	printf("Enter a message: ");

	while ((ch = getchar()) != '\n' && *array_ptr < N ){
		*array_ptr = ch;
		array_ptr += 1;
	}

	while (array_ptr != &message[0]-1){
		printf("%c", *array_ptr);
		array_ptr--;
	}
	
	printf("\n");
	return 0;
}
