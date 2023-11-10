#include <stdio.h>

int main (void)
{
	int GS1,GI,PC,IN,CD;

	printf("Enter ISBN:");
	scanf("%d-%d-%d-%d-%d",&GS1, &GI, &PC, &IN, &CD);

	printf("GS1 prefix: %d\n", GS1);
	printf("Group Identifier: %d\n", GI);
	printf("Publisher code: %d\n", PC);
	printf("Item Number: %d\n", IN);
	printf("Check Digit: %d\n", CD);

	return 0; 
}
