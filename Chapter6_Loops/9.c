#include <stdio.h>

int main (void)
{
	float loan_amount, rate_amount, 
		  monthly_amount, monthly_interest, 
		  total_loan_paid;
	
	int number_of_payments, payment_month;

	printf("Enter amount of loan: ");
	scanf("%f",&loan_amount);
	printf("Enter interest rate: ");
	scanf("%f",&rate_amount);
	printf("Enter monthly payment: ");
	scanf("%f",&monthly_amount);
	printf("Enter number of payments: ");
	scanf("%d",&number_of_payments);

	/* Multiplier to loan amount remaining */
	monthly_interest = 1.f + ((rate_amount / 100.f) /12.f);
	
	total_loan_paid = 0.f;
	payment_month = 1;

	while (number_of_payments > 0)
	{
		printf("-----------------------------\n");
		printf("          Month number   |%d|\n", payment_month);
		printf("-----------------------------\n");
		loan_amount = loan_amount - monthly_amount;
		printf("Loan Amount Outstanding: $%.2f\n", loan_amount);
		printf("Interest last month:     $%.2f\n", 
				-(loan_amount - (loan_amount * monthly_interest)));
		/* accrual amount  */
		total_loan_paid = monthly_amount + total_loan_paid; 

		/* amount of interest this month  */
		loan_amount = loan_amount * monthly_interest;

		number_of_payments--;
		payment_month++;
	}

	printf("Total paid:                  $%.2f\n", total_loan_paid);

	if (loan_amount < 0)
	{
		printf("                         Paid too much!\n");
	} 
	else
	{
		printf("                         Good deal!\n");
	}

	return 0;
}
