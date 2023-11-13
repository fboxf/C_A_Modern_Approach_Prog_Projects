/* mm/dd/yy changed to mm/dd/yy -- Personal preference based on locale */
#include <stdio.h>

int main (void)
{
	int first_d, first_m, first_y;
	int second_d, second_m, second_y;

	printf("Enter first date (dd/mm/yy): ");
	scanf("%d / %d / %d",&first_d, &first_m, &first_y);
	printf("Enter second date (dd/mm/yy): ");
	scanf("%d / %d / %d",&second_d, &second_m, &second_y);

	if (first_y < second_y) /* Comparison of years */
	{
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
				first_d, first_m, first_y,
				second_d, second_m, second_y);
	} 
	else if (first_y > second_y)
	{
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
				second_d, second_m, second_y,
				first_d, first_m, first_y);
	}
	else if ( first_y == second_y) /* Comparison of months */
	{
		if (first_m < second_m)
		{
			printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
					first_d, first_m, first_y,
					second_d, second_m, second_y);
		}
		else if (first_m > second_m)
		{
			printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
					second_d, second_m, second_y,
					first_d, first_m, first_y);
		}
		else if (first_m == second_m) /* Comparison of days */
		{
			if (first_d < second_d)
			{
				printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
						first_d, first_m, first_y,
						second_d, second_m, second_y);
			}
			else if (first_d > second_d)
			{
				printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
						second_d, second_m, second_y,
						first_d, first_m, first_y);
			}
			else 
			{
				printf("%.2d/%.2d/%.2d and %.2d/%.2d/%.2d are the same\n",
						second_d, second_m, second_y,
						first_d, first_m, first_y);
			}
		}
	} 
	return 0;
}
