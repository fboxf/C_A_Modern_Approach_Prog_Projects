#include <stdio.h>

int main (void)
{
	int days_in_month, day_start_of_month, last_day_of_week;

	printf("Enter number of days in month: ");
	scanf("%d", &days_in_month);
	printf("Enter starting day of the week: ");
	scanf("%d", &day_start_of_month);

	last_day_of_week = (8 - day_start_of_month);

	for (int i = 1; i <= days_in_month; i++)
	{
		/* Initial spacing  */
		if (i < day_start_of_month)
		{
			printf("   ");
		}

		printf("%2d ", i);
		if (i == last_day_of_week)
		{
			printf("\n");
			last_day_of_week += 7;
		}
	}
	return 0;
}
