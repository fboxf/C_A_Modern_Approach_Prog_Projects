#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main (void){
	char ch;
	int counts[26] = { 0 }, counts1[26] = { 0 }, counts2[26] = { 0 };

	read_word(counts1);
	read_word(counts2);

	if(equal_array(counts1, counts2)){
		printf("The words are anagrams.\n");
	} else
		printf("The words are not anagrams.\n");

	return 0;
}

void read_word(int counts[26]){
	printf("Enter a word: ");
	char ch;

	for (int i = 0; (ch = getchar()) != '\n'; i++){
		if (isalpha(ch))
				ch = tolower(ch);
		if (isalpha(ch)){
			counts[ch - 97]++;
		}
	}
}

bool equal_array(int counts1[26], int counts2[26]){
	for (int i = 0; i < 26; i++){
		if (counts1[i] != counts2[i]){
			return false;
		}
	}
	return true;
}
