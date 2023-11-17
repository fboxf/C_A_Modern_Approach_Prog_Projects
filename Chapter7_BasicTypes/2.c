/* Prints a table of squares using a for statement */
#include <stdio.h>

int main (void)
{
	int i, n;
	char ch;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for ( i = 1 ; i <= n ; i++ )
	{
		if (i % 24 == 0)
		{
			printf("Press Enter to continue...");
			getchar();
			while (ch != '\n')
			{
				ch = getchar();
			}
		}
		else
		{
			printf("%10d%10d\n", i, i * i);
		}
	}

	return 0;
}
