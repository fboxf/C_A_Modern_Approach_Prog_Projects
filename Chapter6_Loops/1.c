/* 1.c Finds largest number in a series entered by user */
#include <stdio.h>

int main (void)
{
	float user_input, highest_number;
	highest_number = 0.0f;

	printf("Enter a number: ");
	scanf("%f",&user_input);	

	while ((user_input != 0.0f))
	{
		if (user_input > highest_number)
		{
			highest_number = user_input;
		}
		else if (user_input < 0.0f)
		{
			break;
		}

		printf("Enter a number: ");
		scanf("%f",&user_input);
	}

	printf("The largest number entered was %g", highest_number);

	return 0;
}
