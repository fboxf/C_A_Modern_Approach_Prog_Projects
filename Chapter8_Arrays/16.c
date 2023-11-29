#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main (void){
	char ch;
	int tracking_array[26] = { 0 };
	bool anagram = true;

	printf("Enter first word: ");

	/* Add a score to relevant tracking_array element */
	for (int i = 0; (ch = getchar()) != '\n'; i++){
		if (isalpha(ch))
				ch = tolower(ch);
		if (isalpha(ch)){
			tracking_array[ch - 97]++;
		}
	}

	/* Remove it */
	printf("Enter second word: ");
	for (int i = 0; (ch = getchar()) != '\n'; i++){
		if (isalpha(ch))
				ch = tolower(ch);
		if (isalpha(ch)){
			tracking_array[ch - 97]--;
		}
	}

	/* For any that aren't 0 change anagram to false */
	for (int i = 0; i < 26; i++){
		if (tracking_array[i] > 0){
			printf("The words are not anagrams.\n");
			anagram = false ;
			break;
		}
	}

	if (anagram)
		printf("The words are anagrams.\n");

	return 0;
}
