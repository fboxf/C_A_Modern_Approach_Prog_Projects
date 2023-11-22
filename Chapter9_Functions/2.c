/* Calc amount of taxable income */
#include <stdio.h>

float tax_calc(float);

int main (void){
	float income;

	printf("Please enter amount of income: ");
	scanf("%f",&income);

	printf("The amount of tax due is %.2f\n",tax_calc(income));

	return 0;
}

/* Function: Calculate the tax due from user.
 * Pre: Income
 * Post: Tax Due */
float tax_calc(float income){

	if (income < 750.00f){
		return income * 0.01f;
	} else if (income < 2250.00f){
		return 7.50f + (income - 750.00f) * 0.02f;
	} else if (income < 3750.00f){
		return 37.50f + (income - 2250.00f) * 0.03f;
	} else if (income < 5250.00f) {
		return 82.50f + (income - 3750.00f) * 0.04f;
	} else if (income < 7000.00f) {
		return 142.50f + (income - 5250.00f) * 0.05f;
	} else {
		return 230.00f + (income - 7000.00f) * 0.06f;
	}
}
