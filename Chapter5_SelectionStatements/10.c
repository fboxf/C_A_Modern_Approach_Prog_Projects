#include <stdio.h>

int main (void)
{	
	int grade, 
		grade_tens_digits, 
		grade_ones_digits;

	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	if (grade > 100 || grade <= 0)
	{
		printf("Error - Please enter grade between 0 and 100.\n");
	} 
	else 
	{
		grade_tens_digits = grade / 10;
		grade_ones_digits = grade % 10;

		switch (grade_tens_digits) {
			case 0: case 1: case 2: case 3: case 4: case 5: 
				printf("%d%d Grade F\n", grade_tens_digits, grade_ones_digits); break;
			case 6: printf("%d%d Grade D\n", grade_tens_digits, grade_ones_digits); break;
			case 7: printf("%d%d Grade C\n", grade_tens_digits, grade_ones_digits); break;
			case 8: printf("%d%d Grade B\n", grade_tens_digits, grade_ones_digits); break;
			case 9: printf("%d%d Grade A\n", grade_tens_digits, grade_ones_digits); break;
		}
	}
	return 0;
}
