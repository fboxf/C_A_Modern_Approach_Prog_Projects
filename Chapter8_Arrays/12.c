/* Scrabble - sum the value of letters from user input 
Array version of project 5 from Chapter 7 */
#include <stdio.h>
#include <ctype.h>

int main (void)
{
	char ch;
	int scrabble_value[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	int wordsum;

	printf("Enter a word: ");

	while ((ch = getchar()) != '\n')
	{
		ch = toupper(ch);
		wordsum += scrabble_value[ch - 65];
	}
	
	printf("Scrabble value: %d\n", wordsum);

	return 0;
}
