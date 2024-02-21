/* reverse the first and last name input 
 * by the user */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXCHAR 30

int read_line(char str[], int n);
void reverse_name(char *name);

int main (void){
	char name[MAXCHAR];
	printf("%s", "Please enter your name: ");

	read_line(name, MAXCHAR);

	reverse_name(name);
	
	return 0;
}

/**************************************************
 * Name:		reverse_name
 * Description:	prints in reverse, doesn't work
 * 				with leading spaces
 * Input:		pointer to string char
 * Output:		"surname, first_intitial."
**************************************************/ 
void reverse_name(char *name){
	char *ptrToSpace;
	char *ptrToAlpha;
	int i = 0;

	ptrToSpace = strchr(name,' ');
	ptrToSpace++;

	// print surname
	while (*(ptrToSpace) != '\0'){
		printf("%c",*(ptrToSpace));
		ptrToSpace = ptrToSpace + 1;
	}
	
	// print first inital
	while (!isalpha(name[i])){
		i++;
	}
	
	printf(", %c.",name[i]);
}

/**************************************************
 * Function:	read_line
 * Description: populates string with char
 * Input:		initialised string
 * 				n is length of string to be written
 * Output:		length of string
 **************************************************/ 
int read_line(char str[], int n){
	int ch, i = 0;
	n--;

	while ((ch = getchar()) != '\n'){
		if (i < n){
			str[i++] = ch;
		}
	}

	str[i] = '\0';

	return i;
}
