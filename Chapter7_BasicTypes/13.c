/* Write a program that calculates the average word length for a 
 * sentence. */
#include <stdio.h>

int main (void){
	char ch;	
    float number_of_characters;
	float number_of_words = 1.0f;

	printf("Enter a sentence: ");
	while ((ch = getchar()) != '\n')
	{
		if (ch == ' ')
		{
			number_of_words += 1.0f;
		}
		if (ch != ' ')
		{
			number_of_characters += 1.0f;
		}
	}

	printf("Average word length: %.1lf", number_of_characters / number_of_words);
	return 0;

}
