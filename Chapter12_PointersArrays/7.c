/* Modify the maxmin.c program of section 11.4 so that the max_min
 * function uses a pointer instead of an integer to keep track
 * of the current position in the array */
#include <stdio.h>

#define N 10

void max_min(int a[], int* n, int* max, int* min);

int main (void){
	int b[N], i, big, small;
	int n = N;

	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
		scanf("%d", &b[i]);
	
	/* At this stage big small have no
	 * values, we are simply passing
	 * their addresses to the function */
	max_min(b, &n, &big, &small);


	printf("Largest: %d\n", big);
	printf("Smallest: %d\n", small);

	return 0;
}

/* Only here are pointer variables declared */
void max_min(int a[], int* n, int* max, int* min){
	int i;

	*max = *min = a[0];
	
	for (i = 1; i < *n; i++) {
		if (a[i] > *max)
			*max = a[i];
		else if (a[i] < *min)
			*min = a[i];
	}
}
