/* low, high middle are pointers to array elements rather than integers
 * The split function will need a pointer, not an integer */
#include <stdio.h>

#define N 10

void quicksort(int a[], int* low, int* high);
int* split(int a[], int* low, int* high);

int main (void){
	int a[N], i;

	printf("Enter %d numbers to be sorted: ", N);
	for ( i = 0; i < N; i++)
		scanf("%d", &a[i]);

	/* First appearance of low and high
	 * low = a[0] ; high = a[n - 1] */	
	quicksort(a, a, a + (N - 1));

	printf("In sorted order: ");
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}

/* Function: Sorts an array of items
 * pre: array and two ints: low and high
 * post: recursive quicksort */
void quicksort(int a[], int* low, int* high){
	int* middle;

	if (low >= high) return;
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

/* Function: Copies first element into part element */
int* split(int a[], int* low, int* high){
	int part_element = *low; /* copies first element into var part element */

	for (;;) {
		while (low < high && part_element <= *high)
			high--;
		if (low >= high) break;
		*(low++) = *high;

		while (low < high && *low <= part_element)
			low++;
		if (low >= high) break;
		*(high--) = *low;
	}

	*high = part_element;
	return high;
}
