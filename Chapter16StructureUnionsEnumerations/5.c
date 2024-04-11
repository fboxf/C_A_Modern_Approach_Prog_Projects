#include <stdio.h>
#define MINS_SINCE_MIDNIGHT 60
#define NO_OF_FLIGHTS 8

struct times{
	int departure_time;
	int arrival_time;
} flight_times[NO_OF_FLIGHTS];

int main (void)
{
	/* Flight departures - minutes since midnight  */
	flight_times[0].departure_time = (8 * MINS_SINCE_MIDNIGHT);
	flight_times[1].departure_time = (9 * MINS_SINCE_MIDNIGHT) + 43;
	flight_times[2].departure_time = (11 * MINS_SINCE_MIDNIGHT) + 19;
	flight_times[3].departure_time = (12 * MINS_SINCE_MIDNIGHT) + 47;
	flight_times[4].departure_time = (14 * MINS_SINCE_MIDNIGHT);
	flight_times[5].departure_time = (15 * MINS_SINCE_MIDNIGHT) + 45;
	flight_times[6].departure_time = (19 * MINS_SINCE_MIDNIGHT);
	flight_times[7].departure_time = (21 * MINS_SINCE_MIDNIGHT) + 45;

	flight_times[0].arrival_time = (10 * MINS_SINCE_MIDNIGHT) + 16;
	flight_times[1].arrival_time = (11 * MINS_SINCE_MIDNIGHT) + 52;
	flight_times[2].arrival_time = (13 * MINS_SINCE_MIDNIGHT) + 31;
	flight_times[3].arrival_time = (15 * MINS_SINCE_MIDNIGHT) + 0;
	flight_times[4].arrival_time = (16 * MINS_SINCE_MIDNIGHT) + 8;
	flight_times[5].arrival_time = (17 * MINS_SINCE_MIDNIGHT) + 55;
	flight_times[6].arrival_time = (21 * MINS_SINCE_MIDNIGHT) + 20;
	flight_times[7].arrival_time = (23 * MINS_SINCE_MIDNIGHT) + 58;


	int hour, minute, minutes_since_midnight;

	printf("Enter a 24-hour time: ");
	scanf("%d : %d",&hour, &minute);

	/* User input time  */
	minutes_since_midnight = (hour * 60) + minute;

	for (size_t i = 0; i < NO_OF_FLIGHTS; i++){
		if (i < 6){
			if (
					(minutes_since_midnight >= flight_times[i].departure_time) && 
					(minutes_since_midnight < flight_times[i + 1].departure_time))
			{
				printf("Closest departure is %.2d:%.2d\n", 
						(flight_times[i+1].departure_time / 60), (flight_times[i+1].departure_time % 60));

			}
		} 
	   	if (i == 7)	{
			if (minutes_since_midnight > flight_times[i].departure_time){
			printf("Next flight is 8:00 tomorrow\n");
			}
		}
	}

	return 0;
}
