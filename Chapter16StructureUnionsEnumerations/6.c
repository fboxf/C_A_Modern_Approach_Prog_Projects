/* dd/mm/yy -- Personal preference based on locale */
#include <stdio.h>

struct date{
	int day;
	int month;
	int year;
};

int compare_dates(struct date d1, struct date d2);

int main (void){
	struct date first_date, second_date;

	printf("Enter first date (dd/mm/yy): ");
	scanf("%d / %d / %d", 
			&first_date.day, 
			&first_date.month, 
			&first_date.year);
	printf("Enter second date (dd/mm/yy): ");
	scanf("%d / %d / %d",
			&second_date.day, 
			&second_date.month, 
			&second_date.year);

	switch (compare_dates(first_date, second_date)){
		case -1:
			printf("%d/%d/%d is earlier", 
					first_date.day, 
					first_date.month,
					first_date.year);
			break;
		case 1:
			printf("%d/%d/%d is earlier", 
					second_date.day, 
					second_date.month,
					second_date.year);
			break;
		case 0:
			printf("%d/%d/%d is the same date", 
					second_date.day, 
					second_date.month,
					second_date.year);
			break;
		default:
			break;
	}	
	return 0;
}

int compare_dates(struct date d1, struct date d2){
	if (d1.year < d2.year){
		return -1;
	}
	
	if (d1.year > d2.year){
		return 1;
	}

	if (d1.year == d2.year){
		if (d1.month < d2.month){
			return -1;
		} else if (d1.month > d2.month){
			return 1;
		} else {
			if (d1.day < d2.day){
				return -1;
			} else if (d1.day > d2.day){
				return 1;
			} else {
				return 0;
			}
		}
	}
}
