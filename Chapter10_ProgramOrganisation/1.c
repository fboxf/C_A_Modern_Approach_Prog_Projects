/* Modify the stack example of section 10.2 so that it stores characters instead
 * of integers. Next, add a main function that asks the user to enter a series of
 * parentheses and or braces then indicates whether or not they're properly nested */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 20 
bool is_empty(void);
bool is_full(void);
void push(char);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

/* external variables */
char contents[STACK_SIZE];
int top = 0;

int main (void){
	int count;
	char ch;

	printf("Enter parentheses and/or braces: ");

	count = 0;

	for (int j = 0; ((ch = getchar()) != '\n') && j < STACK_SIZE ; j++ ){
		if (ch == '(' || ch == '{'){
			push(ch);
			count++;
		}
		if (ch == ')' || ch == '}'){
			pop();
			count--;
		} 
	}

	if(count == 0)
		printf("Parentheses are matched.");

	return 0;
}

/* Function: true if stack is empty */
bool is_empty(void){
	return top == 0;
}

/* Function: true if stack is full */
bool is_full(void){
	return top == STACK_SIZE;
}

/* Function: place ch in stack */
void push(char ch){
	if(is_full())
		stack_overflow();
	else contents[top++] = ch;
}

/* Function: return value at top */
char pop(void){
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void stack_overflow(void){
	printf("Stack overflow");
	exit (EXIT_FAILURE);
}

void stack_underflow(void){
	printf("Parentheses aren't matched.\n");
}

