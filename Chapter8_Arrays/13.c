#include <stdio.h>

int main (void){
	char ch, initial;
	printf("Enter a first and last name: ");

	char last_name[20];
	
	while ((ch = getchar()) == ' '){
	}

	initial = ch;
	
	while ((ch = getchar()) != ' '){
		putchar ('\b');
	}

	scanf("%s",last_name);

	printf("%s", last_name);

	printf(", %c.\n", initial);

	return 0;
}
