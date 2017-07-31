/*
	Jose Gonzalez Assignment 3 362 - randomtestcard2.c adventurer 
*/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "rngs.h"

#define KARD "adventurer"

void oracle(int player, int cardPlacement, int trashCard, struct gameState *G, struct gameState *oldG)
{
	int newlyDiscarded =0, x =0, counter =0, counterNew = 0;
	newlyDiscarded = oldG->deckCount - G->deckCount;
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
	
	
	if(G->discardCount != (newlyDiscarded+3))
		{
			printf("Error: Number of discarded cards does not equal what is expected.\n");
		}
	else if(G->deckCount[0] != (newlyDiscarded + G->deckCount))
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
	time_t t;
	srand((unsigned) time(&t));
	//srand(time(NULL));
	struct gameState G, testG;
	int numberOfPlayers = 2;
	//int kards[10];
	int allKards[27]={curse,estate,duchy,province,copper,silver,gold,adventurer,council_room,feast,gardens,mine,remodel,smithy,village,baron,great_hall,minion,steward,tribute,ambassador,cutpurse,embargo,outpost,salvager,sea_hag,treasure_map};
	int choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0, handPos = 0;
	int x, a, y, cardOptions;
	int sacrificeKard;
	int player, handMaxCount, trashCard, cardPlacement;

	player = 0;
	handMaxCount = 10;

	printf("Testing adventurer.\n");

	for( x = 0; x < 1000; x++)
	{
		
	int kards[10]={adventurer, council_room, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
		player = (rand() % 4 + 1);	
		initializeGame(player,kards,234,&G);

		//The player's hand are random.
		G.handCount[player]= (rand() % 10);

		// I decided that 10 number of buys and 40 coins would be a bit unlikely in 
		// a game of Dominion but still within the bounds of possibility for the number of buys.
		//G.discardCount = (rand() % 100); 
		G.deckCount[player] = (rand() % 100);
		cardPlacement = G.deckCount[player];
		
		
		//I make a copy of the gamestate to use in the oracle.	
		memcpy(&testG, &G, sizeof(struct gameState));
		cardEffect(adventurer, cardPlacement, choice2, choice3, &G, handPos, &bonus);
		oracle(player, cardPlacement, trashCard,&G, &testG);
	
	}



	return 0 ;
}
