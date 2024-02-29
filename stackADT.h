/* Stack type is a pointer to a stack_type structure
 * 	that stores contents of the stack.
 * 		- structure is 'incomplete type'
 * 			- completed in implementation */
#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>

#define STACK_SIZE 20

typedef struct stack_type *Stack;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, char c);
int pop(Stack s);

void stack_overflow(void);
void stack_underflow(void);

#endif
