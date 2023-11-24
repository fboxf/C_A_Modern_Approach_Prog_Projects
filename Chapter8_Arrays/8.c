/* Write a program that reads a 5 x 5 array of integers and then prints the 
 * row sums and the column sums
 */
#include <stdio.h>

int main (void){

	int grid_fbf[5][5], ttl_score[5], avg_score[5];

	for (int i = 0 ; i < 5; i++){
		printf("Enter students five quiz grades: ");
		for ( int j = 0 ; j < 5; j++){
			scanf("%d",&grid_fbf[i][j]);
		}
	}
	/* calculates total scores */
	for ( int i = 0 ; i < 5; i++){ 
		for ( int j = 0 ; j < 5; j++){
			ttl_score[i] += grid_fbf[i][j];
		}
	}

	/* prints total scores */
	printf("\nStudent totals:");
	for ( int i = 0 ; i < 5; i++){ 
			printf(" %d", ttl_score[i]);
	}

	printf("\nStudent averages:");
	for ( int i = 0 ; i < 5; i++){ 
		avg_score[i] = ttl_score[i] / 5;
		printf(" %d", avg_score[i]);
	}


	return 0;
}
