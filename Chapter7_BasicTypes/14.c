/* Newton's method */
/*  */
#include <stdio.h>
#include <math.h>
int main (void){
	double x; /* user input */
	double guess_y_old, guess_y_new; /* initial square root guess */

	printf("Enter a positive number:");
	scanf("%lf",&x);
	guess_y_new = 1;

	printf("                               Average of\n");
	printf("x         y         x/y        y and x/y \n");
	printf("--------------------------------------------\n");
	/* Program Loop */
	while( (fabs(guess_y_old - guess_y_new)) > 0.00001){

		printf("%lf   %lf   %lf     %lf    \n", 
				x, 
				guess_y_new, 
				x/guess_y_new, 
				(guess_y_new + (x/guess_y_new)/2)
			  );

		guess_y_old = guess_y_new;
		guess_y_new = ((guess_y_new + (x/guess_y_new))/2);


	}
	return 0;
}
