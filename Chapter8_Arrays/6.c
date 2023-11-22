/* BIFF Speak
 * All upper case and:
 * a > 4, B > 8, E > 3, I > 1, O > 0, s > 5 */
#include <stdio.h>
#include <ctype.h>

#define N 50
int main (void){

	char message[N];
	int i, end_of_message;

	printf("Enter message: ");

	/* clever from 0 to where enter is pressed
	 * THEN this is used as the maximum for the for loop */
	for ( end_of_message = 0 ; 
			(message[end_of_message] = toupper(getchar())) != '\n'; 
				end_of_message++)
		;

	for ( i = 0 ; i < end_of_message; i++){
			switch (message[i]){
				case 'A' : message[i] = '4';
						   printf("%c", message[i]);
						   break;
				case 'B' : message[i] = '8';
						   printf("%c", message[i]);
						   break;
				case 'E' : message[i] = '3';
						   printf("%c", message[i]);
						   break;
				case 'I' : message[i] = '1';
						   printf("%c", message[i]);
						   break;
				case 'O' : message[i] = '0';
						   printf("%c", message[i]);
						   break;
				case 'S' : message[i] = '5';
						   printf("%c", message[i]);
						   break;
				default : printf("%c", message[i]);
						  break;
			}
	}


	printf("!!!!!!!!!\n");

	return 0;
}
