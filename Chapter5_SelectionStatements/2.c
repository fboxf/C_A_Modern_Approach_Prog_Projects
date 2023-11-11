#include <stdio.h>

int main (void)
{
	int hour,minute;

	printf("Enter a 24-hour time(hh:mm): ");
	scanf("%d:%d",&hour, &minute);

	if (hour <= 12 && minute <= 59)
	{
		printf("Equivalent 12-hour time: %d:%.2d am", hour, minute);
	}
	else
	{
		printf("Equivalent 12-hour time: %d:%.2d pm", hour - 12, minute);
	}

	return 0;
}
