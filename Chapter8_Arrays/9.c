/* Random walk - 
 * 0 up
 * 1 down
 * 2 left
 * 3 right */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COL 10

bool checkBounds(int current_row, int current_col, int direction);
bool checkIfEmpty(char ten_by_ten[][10], int current_row, int current_col, int direction);
bool checkIfSurrounded(char ten_by_ten[][10], int current_row, int current_col, int direction);

int main (void){

	char ten_by_ten[ROW][COL];
	char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	int direction, current_row, current_col, potential_row, potential_col, i; 

	srand ((unsigned) time(NULL));

	/* Create 2D array of '.' */
	for (int i = 0 ; i < ROW; i++){
		for (int j = 0 ; j < COL ; j++){
			ten_by_ten[i][j] = '.';
		}
	}

	do 
	{
		if (i == 0)
		{
			current_row = 0;
			current_col = 0;
			ten_by_ten[current_row][current_col] = alphabet[0];
			i++;
		}
		else
		{

			/* get direction
			 * in bounds?
			 * 		yes
			 * 			check if space is empty
			 * 				yes
			 * 					check if space is surrounded
			 * 						no
			 * 							place letter 
			 * 						yes 
			 * 							exit program 
			 * 				no 
			 * 					back to start
			 * 		no
			 * 			back to start */

			direction = rand() % 4;

			if (checkBounds(current_row, current_col, direction))
			{
				if (checkIfEmpty(ten_by_ten, current_row, current_col, direction))
				{
					if (checkIfSurrounded(ten_by_ten, current_row, current_col, direction))
					{	
						break;
					}
					else
					{
						/* SUCCESS! APPLY SWITCH DIRECTION AND CHANGE COURSE */
						switch (direction) {
							case 0:
								current_row--;
								break;
							case 1:
								current_row++;
								break;
							case 2:
								current_col--;
								break;
							case 3:
								current_col++;
								break;
						}
					ten_by_ten[current_row][current_col]=alphabet[i];
					i++; /* i only goes up here */
					}
				}
				else 
					;
			}
			else 
				;
		}
	} while (i < 26);

	for (int i = 0 ; i < ROW; i++){
		for (int j = 0 ; j < COL ; j++){
			printf("%c",ten_by_ten[i][j]);
		}
		printf("\n");
	}
	return 0;
}
bool checkBounds(int current_row, int current_col, int direction){
	switch (direction) {
		case 0:
			current_row--;
			break;
		case 1:
			current_row++;
			break;
		case 2:
			current_col--;
			break;
		case 3:
			current_col++;
			break;
	}
	/* UP DOWN LEFT RIGHT */
	if (current_row >=0 && current_row <= 9 && current_col >=0 && current_col <= 9)
		return true;
	else
		return false;
}
bool checkIfEmpty(char ten_by_ten[][10], int current_row, int current_col, int direction){
	switch (direction) {
		case 0:
			current_row--;
			break;
		case 1:
			current_row++;
			break;
		case 2:
			current_col--;
			break;
		case 3:
			current_col++;
			break;
	}
	if (ten_by_ten[current_row][current_col] == '.')
		return true;
	else
		return false;
}

/* Function: Check if up down left right are all occupied
 * Pre: array of row and col
 * 		current row and col coords
 * 		proposed direction
 * Post: True if all occupied
 * 		 False if not */
bool checkIfSurrounded(char ten_by_ten[][10], int current_row, int current_col, int direction){
	switch (direction) {
		case 0:
			current_row--;
			break;
		case 1:
			current_row++;
			break;
		case 2:
			current_col--;
			break;
		case 3:
			current_col++;
			break;
		default:
			break;
	}

	if (ten_by_ten[current_row--][current_col] != '.' && ten_by_ten[current_row++][current_col] != '.' && 
		ten_by_ten[current_row][current_col--] != '.' && ten_by_ten[current_row][current_col++] != '.' )
	{
		return true;
	}
	else
	return false;
}
