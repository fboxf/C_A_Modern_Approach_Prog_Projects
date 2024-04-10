#include <stdio.h>
#include "sort.h"

/**************************************************
 * Name:
 * Description: Take an array of structures
 * Input:		Array of structures
 * 				n number of parts stored
 * Output:		sort arranged by number
 * 				number
**************************************************/ 
void sort_function(struct part x[], int array_length){
	struct part temp; // temp structure of type struct part

	for (size_t i = 0; i < array_length; i++){
		for (size_t j = i + 1; j < array_length; j++) {
			if (x[i].number < x[j].number) {
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}
