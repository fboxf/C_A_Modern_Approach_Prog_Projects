/* gcd - from the book 'Algorithms in C' by Robert Sedgewick  */
#include <stdio.h>
int gcd(int,int);

int main (void)
{
	int x,y;
	printf("Enter a fraction:");
	while (scanf("%d/%d", &x, &y) != EOF)
	{
		if (x > 0 && y > 0)
			printf("In lowest terms %d/%d.\n",
					x / gcd(x,y), y / gcd(x,y));
	}

	return 0;
}

int gcd(int u,int v){
	int t;
	while (u > 0)
	{
		if (u < v)
		{
			t = u;
			u = v;
			v = t;
		} 
		else
			u = u - v;
	}
	return v;
}
