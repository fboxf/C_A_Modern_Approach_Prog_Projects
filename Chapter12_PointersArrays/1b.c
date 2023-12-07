
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
