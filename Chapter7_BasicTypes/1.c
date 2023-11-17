/* Prints a table of squares using a for statement */
#include <stdio.h>

int main (void)
{
	int i,n;

	/* Try with figures such as signed int 2147483647 or
	 * unsigned 4294967295  */
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d",&n);

	for ( i = 1; i <= n; i++)
		printf("%20d%20d\n", i, i * i);

	printf("short is %ld bytes.\n", sizeof(short));	
	printf("int is %ld bytes.\n", sizeof(int));
	printf("long is %ld bytes.\n", sizeof(long));	

	return 0;
}
