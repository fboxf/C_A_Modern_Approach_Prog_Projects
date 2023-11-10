#include <stdio.h>
 
int main (void)
{
	int m,d,y;

	printf("Please enter a date (mm/dd/yyyy)");
	scanf("%d/%d/%d",&m, &d, &y);

	printf("%d%.2d%2d\n", y,m,d);

	return 0;
}
