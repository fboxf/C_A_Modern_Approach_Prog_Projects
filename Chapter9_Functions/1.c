/* Write a program that asks the user to enter a series of integers (which)
 * it stores in an array) then sorts the integers by calling the function
 * selection_sort. 
 *
 * When given an array with n elements, selection_sort must do the following:
 * 1. Search the array to find the largest element, then move it to the last position
 * in the array.
 * 2. Call itself recursively to sort the first n - 1 elements of the array */
#include <stdio.h>
#define N 10

int selection_sort (int [], int);

int main (void){
	int i, a[N];	
	
	printf("Please enter %d integers: ", N);

	while (i < N){
		scanf("%d",&a[i]);
		i++;
	}

	selection_sort (a, N);

	return 0;
}

/* Function: Sorts integers in an array through recursion
 * Pre: array and N are defined
 * Post: sorted array of increasing integers */
int selection_sort (int a[], int n){
	int current_largest_element = 0; 
	int previous_rightmost_element = a[n - 1];
	int index_number;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > current_largest_element)
		{
			index_number = i;
			current_largest_element = a[i];
		}
	}
	
	if (current_largest_element > a[n - 1])
	{
		previous_rightmost_element = a[n - 1];
		a[n - 1] = current_largest_element;
		a[index_number] = previous_rightmost_element;
	}

	if (n > 0)
	{
		selection_sort(a, n - 1);
	}
	else
	{
		printf("%d %d %d %d %d %d %d %d %d %d", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
		return 0;
	}
}
