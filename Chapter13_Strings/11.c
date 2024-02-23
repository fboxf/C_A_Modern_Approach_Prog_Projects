/* NOTE: Program assumes one space between each word */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LENGTH 50

int read_line(char str[], int n);
double compute_average_word_length(const char *sentence);

int main (void){
	char str[LENGTH];
	printf("%s", "Please enter a sentence: ");
	read_line(str,LENGTH);

	printf("%.2lf",compute_average_word_length(str));

	return 0;
}

/**************************************************
 * Name:		compute_average_word_length
 * Description:	" "
 * Input:		pointer to char
 * Output:		average word length
**************************************************/ 
double compute_average_word_length(const char *sentence){
	double number_of_words = 1;
	double character_count = 0;
	
	for (size_t i = 0; sentence[i] != '\0'; i++){
		if ( (isalpha(sentence[i]) )){
			character_count++;
			}
		if (sentence[i] == ' '){
			number_of_words++;
		}
	}

	return character_count / number_of_words;
}

/**************************************************
 * Name:		read_line
 * Description:	read line as sentence
 * Input:		char array / length of arry
 * Output:		length
**************************************************/ 
int read_line(char str[], int n){
	int ch, i = 0;

	while ((ch = getchar()) != '\n'){
		if (i < n){
			str[i++] = ch;
		}
	}
	str[i] = '\0';
	return i;
}
