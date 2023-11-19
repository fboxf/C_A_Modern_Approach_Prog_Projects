/* Program performs calculations on two fractions
 * such as 1/2 + 3/4 
 * Program doesn't simplify fractions*/

#include <stdio.h>
int main (void)
{
	int num1, 	num2,
		//  ------  ------ //
		denom1, denom2; 

	int	result_num, result_denom;

	char operator;

	int temp_num; /* Used in division */

	printf("Enter two fractions separated by an operator,\n");
	printf("such as 1/2 + 3/4: ");
	scanf("%d/%d %c %d/%d", 
			&num1, &denom1, &operator, 
			&num2, &denom2);

	if (operator == '+') /* ADDITION  */
	{
		result_num = (num1 * denom2) + (num2 * denom1);
		result_denom = denom1 * denom2;
		printf("The sum is %d/%d\n", result_num, result_denom);
	}
	else if (operator == '-') /* SUBTRACTION  */
	{
		if (denom1 == denom2)
		{
			result_num = num1 - num2;
			result_denom = denom1;
			printf("%d/%d %c %d/%d is %d/%d", 
					num1, denom1, operator, 
					num2, denom2, result_num, result_denom);
			/* Still need calculation to simplify  */
		}
		else 
		{
			if (denom2 > denom1)
			{
				num1 = num1 * (denom2/denom1); 
				denom1 = denom1 * (denom2/denom1); 

				num2 = num2 * (denom2/denom1);

				result_num = num1 - num2; 
				result_denom = denom1;
				printf("%d/%d %c %d/%d is %d/%d", 
						num1, denom1, operator, 
						num2, denom2, result_num, result_denom);
			}

			if (denom1 > denom2)
			{
				num2 = num2 * (denom1/denom2);
				denom2 = denom2 * (denom1/denom2);

				num1 = num1 * (denom1/denom2);

				result_num = num2 - num1;
				result_denom = denom1;
				printf("%d/%d %c %d/%d is %d/%d", 
						num1, denom1, operator, 
						num2, denom2, result_num, result_denom);
			}
		}
	}
	else if (operator == '*' || operator == '/') /* MULTIPLICATION AND DIVISION */
	{
		if (operator == '/')
		{
			temp_num = num2; 
			num2 = denom2; 
			denom2 = temp_num;
		}	

		result_num = num1 * num2;
		result_denom = denom1 * denom2;
		printf("%d/%d %c %d/%d is %d/%d", 
				num1, denom1, operator, 
				num2, denom2, result_num, result_denom);
	}

	return 0; 
}
