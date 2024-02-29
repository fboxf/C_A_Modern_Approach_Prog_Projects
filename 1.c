#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

int main (void){
	char ch;

	/* ptr of type struct stack_type from stackADT.h */
	Stack myStack;

	/* allocation of correct size from stackADT.c */
	myStack = create();

	printf("Enter parentheses and/or braces: ");

	for (int j = 0; ((ch = getchar()) != '\n') && j < STACK_SIZE ; j++ ){
		if (ch == '(' || ch == '{'){
			push(myStack, ch);
		}
		if (ch == ')' || ch == '}'){
			pop(myStack);
		} 
	}

	if (is_empty(myStack)){
		printf("Parenthesis are matched.\n");
	} else {
		printf("Paranthese are not matched.\n");
	}

	return 0;
}

