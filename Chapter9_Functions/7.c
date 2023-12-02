/* credit to https://github.com/fordea/c-programming-a-modern-approach/blob/master/ch09/Projects/07.c */
#include <stdio.h>

int power(int x, int n);

int main (void){

	int x, n;

	printf("Please enter value and exponent: ");
	scanf("%d %d",&x, &n);	

	printf(" %d\n", n);
	printf("%d = %d\n", x, power(x,n));
	
	return 0;
}

int power(int x, int n){
	if ( n == 0 )
		return 1;
	if ((n % 2) == 0){
		int i = power (x , n / 2);
		return i * i;
	} else {
		return x * power(x, n - 1);
	}
}
