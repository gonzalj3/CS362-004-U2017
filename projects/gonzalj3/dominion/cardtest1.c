/*
	Jose Gonzalez Assignment 3 362 - unittest1.c buyCard 
*/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "rngs.h"

#define KARD "salvager"

void changeCheck(int card, struct gameState *G, struct gameState *testG)
{
	int x=0, numFeast =0; 
	if(G->coins != (testG->coins+4))
		{
			printf("Error: Number of Coins has not increased by the correct number of coins.\n");
		}
	else if(G->numBuys != (testG->numBuys+1))
		{
			printf("Error: Number of Buys has not increased by one.\n");
		}
	else if(G->supplyCount[card] == (testG->supplyCount[card]+1))
		{
			printf("Error: Number of cards in draw pile has increased when no change should have occurred.\n");
		}
	else if(G->handCount[0] != (testG->handCount[0]-1))
		{
			printf("Error: Number of cards player's hand did not decrease.\n");
		}		
	else if(G->deckCount[0] != (testG->deckCount[0]-1))
		{
			printf("Error: Number of cards in the player's hand and deck did not decrease.\n");
		}	
	else
		{
			printf("Past Check Changes Test.\n");
		}
			printf("Coins should Be: %d and is %d.\n",G->coins,testG->coins+4);
			printf("Number of Buys should Be: %d and is %d.\n",G->numBuys,testG->numBuys+1);
	for(; x<G->handCount[0];x++)
	{
		if(G->hand[0][x]==feast)
		{
			numFeast++;
		}	
	}
	printf("The number of feast card piles is %d and is suppose to be 0. \n",numFeast);	}


int main(){
	struct gameState G, testG;
	int numberOfPlayers = 2;
	int kards[10]={adventurer, salvager, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
	int handpos = 0, choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0, x=0;
	int seed = 45;

	printf("Testing salvager.	\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	G.coins = 10;
	for(; x<G.handCount[0];x++)
	{
		if(G.hand[0][x]==feast)
		{
			G.hand[0][x]=gardens;
		}	
	}
	G.hand[0][0] = feast;
	
	memcpy(&testG, &G, sizeof(struct gameState));
	cardEffect(salvager, choice1, choice2, choice3, &G, handpos, &bonus);
	changeCheck(KARD,&G,&testG);


	return 0 ;
}
