/* Random walk - 
 * 0 up
 * 1 down
 * 2 left
 * 3 right 
 
 ***** DOESN'T fully work as procedure seems to skip letters 
 
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){

	char ten_by_ten[10][10];
	char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int direction;
	int current_x, current_y, potential_x, potential_y; 

	srand ((unsigned) time(NULL));

	/* Create 2D array of '.' */
	for (int i = 0 ; i < 10; i++){
		for (int j = 0 ; j < 10 ; j++){
			ten_by_ten[i][j] = '.';
		}
	}

	/* Placement of A - Starting point */
	current_x = 0;
	current_y = 0;
	ten_by_ten[current_x][current_y] = alphabet[0];


	int i = 1;

	for (int i = 1; i < 26; i++){

		potential_x = current_x;
		potential_y = current_y;

		switch(direction){
			case 0:
				break;
			case 1:
				potential_x = current_x + 1;
				potential_y = current_y;
				break;
			case 2:
				potential_x = current_x;
				potential_y = current_y - 1;
				break;
			case 3:
				potential_x = current_x;
				potential_y = current_y + 1;
				break;
		} 

		/* out of bounds? */
		if (potential_x < 0 || potential_x > 9 || potential_y < 0 || potential_y > 9)
		{
			direction = rand() % 4;
			if (i > 1)
			{	
				i -= 1;
			}
		} /* check if occupied */ 
		else if (ten_by_ten[potential_x][potential_y]!='.')
		{
			/* are all directions occupied */
			if (ten_by_ten[potential_x-1][potential_y] != '.' && 
					ten_by_ten[potential_x+1][potential_y] != '.' && 
					ten_by_ten[potential_x][potential_y+1] != '.' && 
					ten_by_ten[potential_x][potential_y-1] != '.')
			{
				return 0;
			}
			else
			{
				direction = rand() % 4;
				if (i < 1)
				{
					i -= 1;
				}
			}
		} 
		else 
		{
			ten_by_ten[potential_x][potential_y]=alphabet[i];
			current_x = potential_x;
			current_y = potential_y;

			direction = rand() % 4;
		}
	}

	/* Display 10 x 10 array */ 
	for (int i = 0 ; i < 10; i++){
		for (int j = 0 ; j < 10 ; j++){
			printf("%c",ten_by_ten[i][j]);
		}
		printf("\n");
	}
	return 0;
}
