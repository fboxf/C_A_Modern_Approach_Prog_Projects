#include <stdio.h>
/* Additional coding from post https://stackoverflow.com/questions/42175251/using-only-4-if-statements-find-largest-and-smallest-of-4-integers */

/* Note that this doesnt put integers in order */
int main (void)
{
	int a,b,c,d,temp;

	printf("Enter four integers:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	if (c > d)
	{
		temp = c;
		c = d;
		d = temp;
	}

	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}

	if (b > d)
	{
		temp = b;
		b = d;
		d = temp;
	}

	printf("Largest: %d\n",d);
	printf("Smallest: %d\n", a);

	return 0;
}

