#ifndef SORT_H
#define SORT_H

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
};

void sort_function(struct part x[], int array_length);

#endif
