/* gcd - from the book 'Algorithms in C' by Robert Sedgewick  */
#include <stdio.h>
int gcd(int,int);

int main (void)
{
	int x,y;
	printf("Enter two integers:");
	while (scanf("%d %d", &x, &y) != EOF)
	{
		if (x > 0 && y > 0)
			printf("%d/%d Greatest common divisor: %d\n", 
					x, y, gcd(x,y));
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
