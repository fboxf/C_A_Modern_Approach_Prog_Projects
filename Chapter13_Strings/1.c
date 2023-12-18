#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXSIZE 20

int get_user_input (char a[]);
void check_if_smallest (char a[], char b[]);
void check_if_largest (char a[], char b[]);

int main (void){
	int count;
	char current_word_array[MAXSIZE];
	char smallest_word[MAXSIZE];
	char largest_word[MAXSIZE];
	
	while ( (count = get_user_input (current_word_array) ) != 4) {
		check_if_smallest(current_word_array, smallest_word);
		check_if_largest(current_word_array, largest_word);
	}

	printf("Smallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);
	
	return 0;
}

int get_user_input (char a[]){
	int n = 0;
	char ch;

	printf("Enter word: ");

	while ((ch = getchar()) != '\n' && (n < (MAXSIZE - 1)) ){
		if (isalpha(ch)){
			ch = tolower(ch);
			a[n] = ch;
			n++;
		}
	}

	a[n] = '\0';

	return n;
}

void check_if_smallest (char a[], char b[]){
	if (strlen(b) == 0)
		strcpy(b, a);
	
	if (strcmp(a, b) < 0){
		strcpy(b, a); 
	} 
}

void check_if_largest (char a[], char b[]){
	if (strlen(b) == 0)
		strcpy(b, a);

	if (strcmp(a, b) > 0){
		strcpy(b, a);
	}
}
