/* Scrabble - sum the value of letters from user input */
#include <stdio.h>
#include <ctype.h>

int main (void)
{
	char ch;
	int wordsum;

	printf("Enter a word: ");

	while ((ch = getchar()) != '\n')
	{
		ch = toupper(ch);

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
	}
	
	printf("Scrabble value: %d\n", wordsum);

	return 0;
}
