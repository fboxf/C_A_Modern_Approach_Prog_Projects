/* One of the oldest encryption techniques is the Caesar 
 * cypher, attributed to Julius Casear. It involves 
 * replacing eac hletter in a message with another letter that is
 * a fixed number of positions later in the alphabet.
 *
 * Write a program that encrypts a message using a Casar cipher. The user will
 * enter the message to be encrypted and the shift amount
 *
 * Assumptions: 
 * 		Message doesn't exceed 80 characters. 
 * 		Characters other than letters unchanged.
 * 		lower remains lower/ upper remains upper
 * 		Wrap around ((ch - 'A') + n) % 26 + 'A'
 * 	ch stores letter and n stores shift amount */
#include <stdio.h>
#include <ctype.h>

int main (void){
	char ch, un_en_msg[80], en_msg[80];
	int n;

	printf("Enter message to be encrypted: ");

	for (int i = 0; ((ch = getchar()) != '\n') && i < 80; i++){
 		un_en_msg[i] = ch;
	}

	printf("Enter shift amount (1 - 25): ");
	scanf("%d",&n);
	
	printf("Encrypted message: ");

	for (int i = 0; i < sizeof(un_en_msg)/sizeof(un_en_msg[0]) ; i++){
		ch = un_en_msg[i];

		if (isupper(ch)){
			printf("%c",((ch - 'A') + n) % 26 + 'A');
		} else if (islower(ch)){
			printf("%c",((ch - 'a') + n) % 26 + 'a');
		} else 
			printf("%c", ch);

	}

	printf("\n");

	return 0;
}
