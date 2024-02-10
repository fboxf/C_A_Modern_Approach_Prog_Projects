/* Scrabble - sum the value of letters from user input */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXSENTENCE 100

int compute_scrabble_value(const char *word);
int read_line(char str[], int n);

int main (void){
	char sentence[MAXSENTENCE];

	printf("Enter a sentence (max 100 characters) ");

	read_line(sentence, MAXSENTENCE);

	printf("Scrabble value: %d\n", compute_scrabble_value(sentence));

	return 0;
}

/**************************************************
 * Function:	compute_scrabble_value
 * Description:	returns SCRABBLE value of the string pointed 
 * 				to by word
**************************************************/ 
int compute_scrabble_value(const char *word){
	int wordsum = 0;
	int i = 0;
	int ch;

	while (word[i] != '\0'){
		ch = toupper(word[i]);
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'L' 
				|| ch == 'N' || ch == 'O' || ch == 'R' 
				|| ch == 'S' || ch == 'T' || ch == 'U') 
			wordsum += 1;
		else if (ch == 'D' || ch == 'G')
			wordsum += 2;
		else if (ch == 'B' || ch == 'C' || ch == 'M' ||  ch == 'P')
			wordsum += 3;
		else if (ch == 'F' || ch == 'H' || ch == 'V' ||  ch == 'W' 
				|| ch == 'Y')
			wordsum += 4;
		else if (ch == 'K')
			wordsum += 5;
		else if (ch == 'J' || ch == 'X')
			wordsum += 8;
		else if (ch == 'Q' || ch == 'Z')
			wordsum += 10;
		i++;
	}	

	return wordsum;
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

