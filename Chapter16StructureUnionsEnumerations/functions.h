#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
};

int find_part(int number,int array_amount, struct part array_name[]);
void insert(int *array_amount, struct part array_name[]);
void search(int array_amount, struct part array_name[]);
void update(int array_amount, struct part array_name[]);
void print(int array_amount, struct part array_name[]);

