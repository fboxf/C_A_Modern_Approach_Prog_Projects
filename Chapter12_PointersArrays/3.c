/* Simplification of 1b using array name as pointer */
#include <stdio.h>

#define N 20

int main (void){
	/* create pointer variable points to type char */
	char ch, message[N];
	int count = 0;

	printf("Enter a message: ");

	while ((ch = getchar()) != '\n' && count < N){
		*(message + count) = ch;
		count++;
	}
	
	while (count != -1) {
		printf("%c",*(message + count));
		count--;
	}

	return 0;
}
