#include <stdio.h>
#include <string.h>

#define MAXSENTENCE 100

int compute_vowel_count(const char *sentence);
int read_line(char str[], int n);

int main (void){
	char sentence[MAXSENTENCE];

	printf("Enter a sentence (max 100 characters) ");

	read_line(sentence, MAXSENTENCE);

	printf("%d",compute_vowel_count(sentence));
	return 0;
}

int compute_vowel_count(const char *sentence){
	int vowel_count = 0;

	for (size_t i = 0; i < strlen(sentence); i++){
		switch (sentence[i]){
			case 'a': case 'e': case 'i': case 'o': case 'u': 
				vowel_count ++;
		}
	}
	return vowel_count;
}

/**************************************************
 * Function:	read_line
 * Description: popualates string with char
 * Input:		initialised string
 * 				n is length of string to be written
 * Output:		length of string
 **************************************************/ 
int read_line(char str[], int n){
	int ch, i = 0;
	n--;

	while ((ch = getchar()) != '\n'){
		if (i < n){
			str[i++] = ch;
		}
	}

	str[i] = '\0';

	return i;
}
