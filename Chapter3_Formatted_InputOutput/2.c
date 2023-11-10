#include <stdio.h>

int main (void)
{
	int item_no;
	float unit_price;
	int d,m,y;

	int count = 0;
	while (count < 2)
	{
		printf("Enter item number:");
		scanf("%d", &item_no);

		printf("Enter unit price:");
		scanf("%f", &unit_price);

		printf("Enter purchase date:");
		scanf("%d/%d/%d", &m,&d,&y);

		if (count == 0)
		{
			printf("Item\t\t\tUnit\t\t\tPurchase\n"
				   "	\t\t\tPrice\t\t\tDate\n");
		}

		printf("%-d\t\t\t$%4.2f\t\t%d/%d/%d\n",item_no, unit_price, m,d,y);

		count++;
	}
	return 0;
}
