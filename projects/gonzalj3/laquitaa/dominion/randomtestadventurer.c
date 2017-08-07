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
	printf("deckCount for player after effect is %d, and before it was %d\n",G->deckCount[player], oldG->deckCount[player]);
	newlyDiscarded = oldG->deckCount[player] - G->deckCount[player];
	//const int topOfDiscardStack = oldG->discardCount[player];
	printf("newlyDiscarded is %d \n", newlyDiscarded);
	int trashedTreasure = 0;
	printf("hi");
	x = newlyDiscarded;

printf("hi2");
printf("discard count for player is %d, and we are predicting its %d .\n",G->discardCount[player],(x+oldG->discardCount[player]));


	/*for( ;x != 0;x--)
	{
		if(G->discard[player][(oldG->discardCount[player]+x)] ==copper)
		{
			trashedTreasure++;
		}
		if(G->discard[player][(oldG->discardCount[player]+x)] ==silver)
		{
			trashedTreasure++;
		}
		if(G->discard[player][(oldG->discardCount[player]+x)]  ==gold)
		{
			trashedTreasure++;
		}
		
	}*/
	for(x=0; x<oldG->handCount[0];x++)
	{
		if(oldG->hand[player][x] ==copper)
		{
			counter++;
		}
		if(oldG->hand[player][x] ==silver)
		{
			counter++;
		}
		if(oldG->hand[player][x] ==gold)
		{
			counter++;
		}
		
	}
	
	for(x=0; x<G->handCount[player];x++)
	{
		if(G->hand[player][x] ==copper)
		{
			counterNew++;
		}
		if(G->hand[player][x] ==silver)
		{
			counterNew++;
		}
		if(G->hand[player][x] ==gold)
		{
			counterNew++;
		}
		
	}
	
	
	if(G->discardCount != (newlyDiscarded+3))
		{
			printf("Error: Number of discarded cards does not equal what is expected.\n");
		}
	else if(G->deckCount[player] != (newlyDiscarded + G->deckCount))
	{
			printf("Error: Deck count is not what is expected.\n");
	}
	else if(counterNew != (counter + 2))
	{
			printf("Error: Did not find two extra treasure cards.\n");
	}
	/*else if(trashedTreasure > 0)
	{
		printf("We found %d trashed treasures that should not have been trashed. \n",trashedTreasure);
	}*/
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

	int numberOfPlayers = 2;
	//int kards[10];
	int allKards[27]={curse,estate,duchy,province,copper,silver,gold,adventurer,council_room,feast,gardens,mine,remodel,smithy,village,baron,great_hall,minion,steward,tribute,ambassador,cutpurse,embargo,outpost,salvager,sea_hag,treasure_map};
	int choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0, handPos = 0;
	int x, a, y, cardOptions;
	int sacrificeKard;
	int player, handMaxCount, trashCard, cardPlacement;

	player = 0;
	handMaxCount = 10;
	int wtPlayer =0;

	printf("Testing adventurer.\n");

	for( x = 0; x < 10; x++)
	{
		struct gameState G, testG;	
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
		wtPlayer = whoseTurn(&G);
		player = 0;
		printf("WhoseTurnPlayer returns %d and we chose the player to be %d.\n",wtPlayer,player);
		cardEffect(adventurer, cardPlacement, choice2, choice3, &G, handPos, &bonus);
		printf("about to jump into oracle");
		oracle(player, cardPlacement, trashCard,&G, &testG);
		//G.deckCount[player]=0;
		//shuffle(player,&G);
		//endTurn(&G);
	
	}



	return 0 ;
}
