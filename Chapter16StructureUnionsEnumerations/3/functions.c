/* The key point to note here is that you need num_parts to increment
 * when passed to insert, hence a pointer is required. */

#include <stdio.h>
#include "functions.h"
#include "readline.h"

int find_part(int number, int array_amount, struct part array_name[]){
	int i;

	for (i = 0; i < array_amount; i++){
		if (array_name[i].number == number){
			return i;
		}
	}
	return -1;
}

void insert(int *array_amount, struct part array_name[]){
	int part_number;

	if(*(array_amount) == MAX_PARTS){
		printf("Database is full; can't add more parts.\n");
		return;
	}

	printf("Enter part number: ");
	scanf("%d", &part_number);

	if (find_part(part_number, *(array_amount), array_name) >= 0){
		printf("Part already exists\n");
		return ;

	}

	array_name[*(array_amount)].number = part_number; 

	printf("Enter part name: ");
	read_line(array_name[*(array_amount)].name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &array_name[*(array_amount)].on_hand);
	*array_amount = *array_amount + 1;
}

void search(int array_amount, struct part array_name[]){
	int i, number;

	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number, array_amount, array_name);
	if (i >= 0 ){
		printf("Part name: %s\n", array_name[i].name);
		printf("Quantity on hand: %d\n", array_name[i].on_hand);
	} else {
		printf("Part not found.\n");
	}
}

void update(int array_amount, struct part array_name[]){
	int i, number, change;

	printf("Enter part number: ");
	scanf("%d",&number);
	i = find_part(number, array_amount, array_name);
	if (i >= 0) {
		printf("Enter change in quanity on hand; ");
		scanf("%d", &change);
		array_name[i].on_hand += change;
	} else {
		printf("Part not found.\n");
	}
}

void print(int array_amount, struct part array_name[]){
	printf("Part Number		Part Name	"
			"Quantity on Hand\n");

	for (size_t i = 0; i < array_amount; i++){
		printf("%7d		        %-25s%11d\n", 
				array_name[i].number,
				array_name[i].name, 
				array_name[i].on_hand);
	}

}

