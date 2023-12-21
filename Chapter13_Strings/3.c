/* Modify the deal.c, so that it prints the
 * full names of the cards it deals
 * HINT: replace rank_code and suit_code by arrays containing
 * pointers to strings */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main (void)
{
	/* all false  */
	bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
	int num_cards, rank, suit;

	char* two = "two of ";
	char* three = "three of ";
	char* four = "four of ";
	char* five = "five of ";
	char* six = "six of ";
	char* seven = "seven of ";
	char* eight = "eight of ";
	char* nine = "nine of ";
	char* ten = "ten of ";
	char* jack = "jack of ";
	char* queen = "queen of ";
	char* king = "king of ";
	char* ace = "ace of ";

	char* clubs = "clubs\n";
	char* diamonds = "diamonds\n";
	char* hearts = "hearts\n";
	char* spades = "spades\n";

	const char* rank_code[] = {two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace};
	const char* suit_code[] = {clubs, diamonds, hearts, spades};
	srand ((unsigned) time(NULL));

	printf("Enter number of cards in hand: ");
	scanf("%d",&num_cards);

	printf("Your hand:");
	while (num_cards > 0)
	{
		suit = rand() % NUM_SUITS;
		rank = rand() % NUM_RANKS;
		if (!in_hand[suit][rank]) 
		{
			in_hand[suit] [rank] = true;
			num_cards--;
			printf(" %s%s", rank_code[rank], suit_code[suit]);
		}
	}
	printf("\n");

	return 0;
}
