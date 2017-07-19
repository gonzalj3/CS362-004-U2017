/*
	Jose Gonzalez Assignment 3 362 - cardtest4.c adventurer 
*/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "rngs.h"

#define KARD "adventurer"

void changeCheck(struct gameState *G, struct gameState *oldG)
{
	int newlyDiscarded =0, x =0, counter =0, counterNew = 0;
	newlyDiscarded = oldG->deckCount[0] - G->deckCount[0];
	for(; x<oldG->handCount[0];x++)
	{
		if(oldG->hand[0][x] ==copper)
		{
			counter++;
		}
		if(oldG->hand[0][x] ==silver)
		{
			counter++;
		}
		if(oldG->hand[0][x] ==gold)
		{
			counter++;
		}
		
	}
	
	for(; x<G->handCount[0];x++)
	{
		if(G->hand[0][x] ==copper)
		{
			counterNew++;
		}
		if(G->hand[0][x] ==silver)
		{
			counterNew++;
		}
		if(G->hand[0][x] ==gold)
		{
			counterNew++;
		}
		
	}
	
	
	if(G->discardCount[0] != (newlyDiscarded+2))
		{
			printf("Error: Number of discarded cards does not equal what is expected.\n");
		}
	else if(G->deckCount[0] != (newlyDiscarded + G->deckCount[0]))
	{
			printf("Error: Deck count is not what is expected.\n");
	}
	else if(counterNew != counter + 2)
	{
			printf("Error: Did not find two extra treasure cards.\n");
	}
	else
		{
			printf("Past Check Changes Test.\n");
		}
			//printf("Hand count should Be: %d and is %d.\n",G->handCount[0],testG->handCount[0]+3);
			//printf("Number of Buys should Be: %d and is %d.\n",G->numBuys,testG->numBuys+1);
}

int main(){
	struct gameState G, testG;
	int numberOfPlayers = 2;
	int kards[10]={adventurer, salvager, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
	int handpos = 0, choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0;
	int seed = 9380;

	printf("Testing adventurer.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	memcpy(&testG, &G, sizeof(struct gameState));

	cardEffect(adventurer, choice1, choice2, choice3, &G, handpos, &bonus);
	changeCheck(&G,&testG);


	return 0 ;
}
