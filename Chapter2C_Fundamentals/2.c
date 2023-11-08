#include <stdio.h> 
#define PI 3.14159

float sphere_volume (float);

int main (void) 
{
	float radius = 10.00;
	printf("%f", sphere_volume(radius));
		
	return 0;
}

float sphere_volume (float radius)
{
	return (4.0/3.0)*(PI* (radius * radius * radius));
}
