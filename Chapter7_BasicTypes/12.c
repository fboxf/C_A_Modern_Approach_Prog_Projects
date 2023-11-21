/* Write a program that evaluates an expression:
 *
 * Enter an expression: 1+2.5*3
 * Value of expression: 10.5
 *
 * The operands in the expression are floating are floating-point
 * numbers; the operators are + - * / 
 *
 * The expression is evaluated from left to right
 * */
#include <stdio.h>

int main (void){
	double num = 0.0, total = 0.0;
	char operator;

	printf("Enter an expression (q to quit): ");
	scanf("%lf",&total);

	while ((operator = getchar()) != '\n'){
		switch (operator) {
			case '+':
				scanf("%lf",&num);
				total += num;
				break;
			case '-':
				scanf("%lf",&num);
				total -= num;
				break;
			case '*':
				scanf("%lf",&num);
				total *= num;
				break;
			case '/':
				scanf("%lf",&num);
				total /= num;
				break;
			default:
				break;
		}
	}

	printf("%g", total);
	return 0;
}
/* credit https://github.com/williamgherman/c-solutions/tree/master/07/projects/12 for this solution */
