#include <stdio.h>
#define HOURS 60

void find_closest_flight (
		int desired_time, 
		int * departure_time, 
		int * arrival_time
		);

int main (void){
	int departure_time, arrival_time;
	int hour, minute, minutes_since_midnight;

	printf("Enter a 24-hour time: ");
	scanf("%d : %d",&hour, &minute);

	minutes_since_midnight = (hour * 60) + minute;
	
	find_closest_flight(minutes_since_midnight, &departure_time, &arrival_time);

	printf("Closest flight is %.2d:%.2d, due to arrive at %.2d:%.2d\n", 
			departure_time / 60, departure_time % 60, 
			arrival_time / 60, arrival_time % 60);

	return 0;
}

void find_closest_flight ( int desired_time, int * departure_time, int * arrival_time){
	int d1, d2, d3, d4, d5, d6, d7, d8, a1, a2, a3, a4, a5, a6, a7, a8;

	/* Departure times */
	d1 = (8 * HOURS);
	d2 = (9 * HOURS) + 43;
	d3 = (11 * HOURS) + 19;
	d4 = (12 * HOURS) + 47;
	d5 = (14 * HOURS);
	d6 = (15 * HOURS) + 45;
	d7 = (19 * HOURS);
	d8 = (21 * HOURS) + 45;

	/* Arrival times */
	a1 = (10 * HOURS) + 16;
	a2 = (11 * HOURS) + 52;
	a3 = (13 * HOURS) + 31;
	a4 = (15 * HOURS);
	a5 = (16 * HOURS) + 8;
	a6 = (17 * HOURS) + 55;
	a7 = (21 * HOURS) + 20;
	a8 = (11 * HOURS) + 58;
	
	int departure_array[8] = {d1, d2, d3, d4, d5, d6, d7, d8};
	int arrival_array[8] = {a1, a2, a3, a4, a5, a6, a7, a8};

	for (int i = 0; i < 8 ; i++){
		if ((desired_time > departure_array[i]) && (desired_time < departure_array[i+1])){
			*departure_time = departure_array[i+1];
			*arrival_time = arrival_array[i+1];
		} else if (desired_time > departure_array[7]){
			*departure_time = departure_array[0];
			*arrival_time = arrival_array[0];
		}
	}
}
