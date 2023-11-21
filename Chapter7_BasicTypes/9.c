
#include <stdio.h>
#include <ctype.h>

#define HOURS 60

int main (void){
	int hour, minute;

	char first_character, second_character; 

	printf("Enter a 12-hour time: ");
	scanf("%d : %d %c%c",&hour, &minute, 
			&first_character, &second_character);

	if (isalpha(first_character)){
		if (first_character == 'p' || first_character == 'P'){
			hour = hour + 12;
			printf("Equivalent 24-hour time: %d:%d", hour, minute);
		}
		else 
			printf("Equivalent 24-hour time: %d:%d", hour, minute);
	}	

	return 0;
}
