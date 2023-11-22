/* Reverses a series of numbers */
#include <stdio.h>
#define N 10

int main (void)
{
	int a[N], i;

	printf("Enter %d numbers: ", N);	
	for ( i = 0 ; i < sizeof(a) / sizeof(a[0]) ; i++)
		scanf("%d",&a[i]);

	/* eg 40bytes / 4 = 10 
	 * 10 9 8 ... 3 2 1 */
	printf("In reverse order:");
	for ( i = (sizeof(a) / sizeof(a[0])) - 1; i >= 0 ; i--)
		printf(" %d", a[i]);
	printf("\n");

	return 0;
}
