
/* Write a program that reads a 5 x 5 array of integers and then prints the 
 * row sums and the column sums
 */
#include <stdio.h>

int main (void){

	int grid_fbf[5][5], row_ttls[5], col_ttls[5];

	for (int i = 0 ; i < 5; i++){
		printf("Enter row %d:", i + 1);
		for ( int j = 0 ; j < 5; j++)
		{
			scanf("%d",&grid_fbf[i][j]);
		}
	}

	printf("\nRow totals:");

	for ( int i = 0 ; i < 5; i++){ 
		for ( int j = 0 ; j < 5; j++){
			row_ttls[i] += grid_fbf[i][j];
		}
		printf(" %d", row_ttls[i]);
	}

	printf("\nColumn totals:");
	for ( int i = 0 ; i < 5; i++){ 
		for ( int j = 0 ; j < 5; j++){
			col_ttls[i] += grid_fbf[j][i];
		}
		printf(" %d", col_ttls[i]);
	}

	return 0;
}
