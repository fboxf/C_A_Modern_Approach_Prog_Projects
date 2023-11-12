/* calculate a broker's commission */
#include <stdio.h> 

float calc_rival_commission (float);

int main (void)
{
	float commission, commission_rival;
	float value, shares, price_per_share;

	printf("Enter number of shares and price per share: ");
	scanf("%f %f", &shares, &price_per_share);

	value = shares * price_per_share;

	/* Original commission charge  */
	if (value < 2500.00f)
		commission= 30.00f + .017f * value;
	else if (value < 6250.00f )
		commission = 56.00f + .0066f * value;
	else if (value < 20000.00f )
		commission = 76.00f + .0034f * value;
	else if (value < 50000.00f )
		commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		commission = 155.00f + .0011f * value;
	else
		commission = 255.00f + .0009f * value;

	if (commission < 39.00f)
		commission = 39.00f;

	printf("Commission: $%.2f\n", commission);
	printf("Rival Commission: $%.2f\n", calc_rival_commission(shares));

	return 0;
}

/* 
* Compute rival commission
* Pre: shares is defined
* Post: Amount of commission charged by rival 
*/
float calc_rival_commission (float shares)
{
	/* Rival broker calc  */
	if (shares < 2000)
		return 33.00f + 0.03 * shares;
	else
		return 33.00f + 0.02 * shares;
}
