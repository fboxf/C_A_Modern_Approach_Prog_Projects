/* Caesar cypher */
#include <stdio.h>
#include <ctype.h>

int main (void){
	char ch, un_en_msg[80];
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
