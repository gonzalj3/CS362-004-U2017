/*
	Jose Gonzalez Assignment 3 362 - cardtest3.c smithy 
*/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "rngs.h"

#define KARD "smithy"

void changeCheck(struct gameState *G, struct gameState *testG)
{
	int exHandC = (testG->handCount[0]+2);
	int exDeckC = (testG->deckCount[0]-3);
	if(G->handCount[0] != exHandC)
	{
			printf("Error: Number of cards player's hand did not increase.\n");
	}
	if(G->deckCount[0] != exDeckC)
	{
			printf("Error: Number of cards in player's deck did not decrease by 3.\n");
	}
	else
		{
			printf("Past Check Changes Test.\n");
		}
			printf("Hand count is: %d and should be %d.\n",G->handCount[0],exHandC);
			printf("Deck count is: %d and should be %d.\n",G->deckCount[0],exDeckC);
}

int main(){
	struct gameState G, testG;
	int numberOfPlayers = 2;
	int kards[10]={adventurer, salvager, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
	int handpos = 0, choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0, x=0;
	int seed = 9380;

	printf("Testing smithy.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	memcpy(&testG, &G, sizeof(struct gameState));
	cardEffect(smithy, choice1, choice2, choice3, &G, handpos, &bonus);
	printf("The size of the deck before smithy is %d and after it is %d.\n",testG.deckCount[0],G.deckCount[0]);
	changeCheck(&G, &testG);


	return 0 ;
}
