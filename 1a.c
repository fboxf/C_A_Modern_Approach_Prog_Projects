#include <stdio.h>

int main (void){
	int storage_position = 0;
	char ch, message[20];
	
	printf("Enter a message: ");

	while ((ch = getchar()) != '\n'){
		message[storage_position] = ch;
		storage_position++;
	}

	printf("Reversal is: ");

	for (int i = storage_position; i >= 0; i--){
		printf("%c", message[i]);
	}

	printf("\n");
	return 0;
}
