#include <stdio.h>

int wind_force (float);

int main (void)
{
	float spd_kts;
	
	printf("Please enter a wind speed (in knots): ");
	scanf("%f",&spd_kts);

	wind_force(spd_kts);
	
	return 0;
}

/* Calculate wind force from knots supplied by user input
* pre: spd_knots is defined
* post: print wind force to stdout
*/
int wind_force (float wind_speed)
{
	if (wind_speed < 1)
	{
		printf("Wind force: Calm\n");
		return 0;
	}
	else if (wind_speed < 4)
	{
		printf("Wind force: Light Air\n");
		return 0;
	}
	else if (wind_speed < 27)
	{
		printf("Wind force: Breeze\n");
		return 0;
	}
	else if (wind_speed < 47)
	{
		printf("Wind force: Gale\n");
		return 0;
	}
	else if (wind_speed < 63)
	{
		printf("Wind force: Storm\n");
		return 0;
	}
	else
	{
		printf("Wind force: Hurricane\n");
		return 0;
	}
}

