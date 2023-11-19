#include <stdio.h>
#include <ctype.h>

#define HOURS 60

int main (void)
{
	int hour, minute, minutes_since_midnight;
	int d1,d2,d3,d4,d5,d6,d7,d8;

	char first_character, second_character; 

	/* Flight departures - minutes since midnight  */
	d1 = (8 * HOURS);
	d2 = (9 * HOURS) + 43;
	d3 = (11 * HOURS) + 19;
	d4 = (12 * HOURS) + 47;
	d5 = (14 * HOURS);
	d6 = (15 * HOURS) + 45;
	d7 = (19 * HOURS);
	d8 = (21 * HOURS) + 45;

	printf("Enter a 12-hour time: ");
	scanf("%d : %d %c%c",&hour, &minute, 
			&first_character, &second_character);

	if (isalpha(first_character))
	{
		if (first_character == 'p' || first_character == 'P')
		{
			hour = hour + 12;
		}
	}	

	if (second_character == ' ')
	{
		minutes_since_midnight = (hour * 60) + minute;
	}

	/* User input time  */
	minutes_since_midnight = (hour * 60) + minute;

	if (minutes_since_midnight == d1 )
		printf("Next flight departure is at: 09:43 \n");

	if (minutes_since_midnight == d2 )
		printf("Next flight departure is at: 11:19 \n");

	if (minutes_since_midnight == d3 )
		printf("Next flight departure is at: 12:47 \n");

	if (minutes_since_midnight == d4 )
		printf("Next flight departure is at: 14:00 \n");

	if (minutes_since_midnight == d5 )
		printf("Next flight departure is at: 15:45 \n");

	if (minutes_since_midnight == d6 )
		printf("Next flight departure is at: 19:00 \n");

	if (minutes_since_midnight == d7 )
		printf("Next flight departure is at: 21:45 \n");

	if (minutes_since_midnight == d8 )
		printf("Next flight departure is at: 08:00 \n");



	if (minutes_since_midnight < d1 )
	{
		printf("Next flight departure is at: 08:00 \n");
	}

	if (minutes_since_midnight > d1 && minutes_since_midnight < d2)
	{
		printf("Next flight departure is at: 09:43 \n");
	}

	if (minutes_since_midnight > d2 && minutes_since_midnight < d3)
	{
		printf("Next flight departure is at: 11:19\n");
	}

	if (minutes_since_midnight > d3 && minutes_since_midnight < d4)
	{
		printf("Next flight departure is at: 12:47\n");
	}

	if (minutes_since_midnight > d4 && minutes_since_midnight < d5)
	{
		printf("Next flight departure is at: 14:00\n");
	}

	if (minutes_since_midnight > d5 && minutes_since_midnight < d6)
	{
		printf("Next flight departure is at: 15:45\n");
	}

	if (minutes_since_midnight > d6 && minutes_since_midnight < d7)
	{
		printf("Next flight departure is at: 19:00\n");
	}

	if (minutes_since_midnight > d7 && minutes_since_midnight < d8)
	{
		printf("Next flight departure is at: 21:45\n");
	}

	if (minutes_since_midnight > d8)
	{
		printf("Next flight departure is tomorrow at: 08:00\n");
	}

	return 0;
}
