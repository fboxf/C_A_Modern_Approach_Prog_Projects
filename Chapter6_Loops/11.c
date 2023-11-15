#include <stdio.h>

double factorial (int);

int main (void)
{
	double e = 1.0;
	int n;

	printf("Enter an integer value greater than 0: ");
	scanf("%d",&n);

	do {
		e += 1 / factorial(n);
		n--;
	} while ( n >= 1 );

	printf("%f\n", e);

	return 0;
}

double factorial (int n){
	double result = 1;

	for (int i = 2; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
