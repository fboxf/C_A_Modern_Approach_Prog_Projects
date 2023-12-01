#include <stdio.h>
#include <stdbool.h>

void checkBoundaries (int * row, int * col, long n);
bool checkOccupied(int row, int col, long n, long magic_square[][n]);
void printArray(long n, long magic_square[][n]);

int main (void){
	int n_count, total_count, row, col, prev_row, prev_col;
	long n;	

	printf("This program creates a magic square of a specified size\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%ld",&n);

	while (n % 2 == 0){
		printf("Please enter an ODD number between 1 and 99: ");
		scanf("%ld",&n);
	}

	long magic_square[n][n];

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			magic_square[i][j] = 0;
		}
	}

	n_count = 1;
	total_count = n * n;

	while (n_count <= total_count){
		if (n_count == 1){
			row = 0;
			col = n / 2;
			magic_square[row][col] = n_count;

			prev_row = row;
			prev_col = col;

			row--;
			col++;
			n_count++;
		}

		checkBoundaries(&row, &col, n);
		
		if (checkOccupied(row, col, n, magic_square)){

			row = prev_row;
			col = prev_col;

			row++;

			if (row > n - 1){
				row = 0;
				col++;
			} 
		} else {
			magic_square[row][col] = n_count;
			
			prev_row = row;
			prev_col = col;

			row--;
			col++;
			n_count++;
		}
	}

	printArray(n, magic_square);

	return 0;
}

void checkBoundaries (int * row, int * col, long n){
	if (*row < 0 )
		*row = n - 1;
	if (*col > n-1)
		*col = 0;
}
bool checkOccupied(int row, int col, long n, long magic_square[][n]){
	if (magic_square[row][col] > 0)
		return true;
	else
		return false;
}
void printArray(long n, long magic_square[][n]){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			printf("%4.ld ",magic_square[i][j]);
		}
		printf("\n");
	}
}
