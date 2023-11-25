/* Modify Programming project 8 from chapter 5 so that the departure times are stored in an array and the arrival times 
 * are stored in a second array (The times are integers representing the number of minutes since midnight)
 * The program will use a loop to search the array of departure times for the one closest to the time entered by the user */

#include <stdio.h>
#define HOURS 60

int main (void)
{
	int hour, minute, minutes_since_midnight;
	int closest_departure_time;

	/* Flight departures - minutes since midnight  */
	int departures[8] = {
		(8 * HOURS), 
		(9 * HOURS) + 43, 
		(11 * HOURS) + 19,
		(12 * HOURS) + 47, 
		(14 * HOURS), 
		(15 * HOURS) + 45, 
		(19 * HOURS), 
		(21 * HOURS) + 45
	};

	int arrivals[8] = {
		(10 * HOURS) + 16,
		(11 * HOURS) + 52,
		(13 * HOURS) + 31,
		(15 * HOURS),
		(16 * HOURS) + 8,
		(17 * HOURS) + 55,
		(21 * HOURS) + 20,
		(23 * HOURS) + 58
	};

	printf("Enter a 24-hour time: ");
	scanf("%d : %d",&hour, &minute);

	/* User input time  */
	minutes_since_midnight = (hour * 60) + minute;
	
	for (int i = 0; i < 8; i++){
		if (minutes_since_midnight > departures[i] && minutes_since_midnight < departures[i + 1]){
			printf("Next flight departure is at %.2d:%.2d\n", 
					departures[i + 1]/60, 
					departures[i + 1] % 60 );
		}
	}

	return 0;
}
