#include <stdio.h>

int main (void){
	char ch;
	int sum = 0; 
	printf("Enter a sentence: ");

	while ((ch = getchar()) != EOF){
		switch (ch){
			case 'a': case 'e': case 'i': case 'o': case 'u': 
			sum ++;
		}
	}

	printf("\nYour sentence contains %d vowels", sum);

	return 0;
}
