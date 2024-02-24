/*  */
#include <stdio.h>
#include <ctype.h>

#define WORDS 30
#define WORD_LENGTH 20

int main (void){
	int word_number = 0;
	int character_number = 0;
	int terminating_char = 0;
	int ch;

	char sentence[WORDS][WORD_LENGTH + 1];

	printf("%s", "Enter a sentence: ");

	while ((ch = getchar()) != '\n' && word_number < WORDS) {
		if (ch == ' ' || ch == '\t'){
			sentence[word_number][character_number] = '\0';
			word_number++;
			character_number = 0;
			continue;
		}
		if (!(isalpha(ch))){
			terminating_char = ch;
			sentence[word_number][character_number] = '\0';
			break;
		} else if (character_number < WORD_LENGTH){
			sentence[word_number][character_number++] = ch;
		}
	}

	while (word_number > 0){
		printf("%s", sentence[word_number--]);
	}

	printf("%s%c\n", sentence[word_number], terminating_char);
	

	return 0;
}
