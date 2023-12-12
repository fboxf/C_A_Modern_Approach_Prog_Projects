/* Write a program that reads a message, then checks whether it's a 
 * palindrome (the letters are the same from left to right as from 
 * right to left */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define N 50

int read_message (char a[]);
bool check_message (char a[], int count, char b[]);
void print_message (char a[], int count);

int main (void){
	char message[N], reverse_message[N];
	int count;

	count = read_message(message);

	print_message(message, count);

	if (check_message(message, count, reverse_message))
		printf("is a palindrome\n");
	else
		printf("is not a palindrome\n");

	return 0;
}

/* Function: 	get user input and add to string
 * 				remove spaces, special char and 
 * 				convert to capitals */
int read_message (char a[]){
	char ch;
	int count = 0;

	printf("Enter a message: ");

	while ((ch = getchar()) != '\n' && (count < N)){
		if (isalpha(ch)){
			*(a + count) = toupper(ch);
			count++;
		}
	}	

	return count;
}

/* Function:	Create a reverse array and then check off 
 * 				each element. If no match, return false */
bool check_message (char a[], int count, char b[]){
	bool palindrome = false;
	int elements = count-1;

	for (int i = 0; i <= count ;i++){
		*(b+i) = *(a + elements);
		elements--;
	}	

	for (int i = 0; i <= count ; i++){
		if (*(b + i) != *(a + i)){
			return false;
		} else 
			return true;
	}
}

/* Function:	print original message */
void print_message (char a[], int count){
	for (int i = 0; i < count; i++){
		printf("%c",*(a + i));
	}
	printf("\n");
}
