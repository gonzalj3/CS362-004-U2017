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
	int newlyDiscarded =0, x =0, counter =0, counterNew = 0, gold = 0, silver =0;
	newlyDiscarded = oldG->deckCount[0] - G->deckCount[0];
	for(x = 0 ; x<=oldG->handCount[0];x++)
	{
		if(oldG->hand[0][x] ==copper)
		{
			counter++;
		}
		if(oldG->hand[0][x] ==silver)
		{
			counter++;
		//	silver++;
		}
		if(oldG->hand[0][x] ==gold)
		{
			counter++;
		//	gold++;
		}
		
	}
	
	for(x = 0; x<=G->handCount[0];x++)
	{
		if(G->hand[0][x] == copper)
		{
			counterNew++;
			printf("found opper, %d\n",x);

		}
		if(G->hand[0][x] == silver)
		{
			counterNew++;
			silver++;
			printf("found isilver , %d\n",x);

		}
		if(G->hand[0][x] == gold)
		{
			counterNew++;
			gold++;
			printf("found gold , %d\n",x);
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
	else
	{
			printf("Past Check Changes Test.\n");
	}
			//printf("Hand count should Be: %d and is %d.\n",G->handCount[0],testG->handCount[0]+3);
			//printf("Number of Buys should Be: %d and is %d.\n",G->numBuys,testG->numBuys+1);
	if(gold != 1 || silver != 1)
	{
		printf("we have %d gold and %d silver when we should have 1 each.\n", gold, silver);
	}
	if(counterNew != counter + 2)
	{
			printf("Error: Did not find two extra treasure cards.\n");
	}

}

int main(){
	struct gameState G, testG;
	int numberOfPlayers = 2;
	int kards[10]={adventurer, salvager, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
	int handpos = 0, choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0, x = 0;
	int seed = 9380;

	printf("Testing adventurer.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	G.deck[0][(G.deckCount[0]-1)] = gold;
	printf("%d\n",G.deckCount[0]);
	G.deck[0][(G.deckCount[0]-2)] = silver;
	printf("%d\n",G.deckCount[0]);
	for(x = 0; x<=G.handCount[0];x++)
	{
		if(G.hand[0][x] ==copper)
		{
			G.hand[0][x] = baron;
		}
		if(G.hand[0][x] ==silver)
		{
			G.hand[0][x] = baron;
		}
		if(G.hand[0][x] ==gold)
		{
			G.hand[0][x] = baron;
			printf("%d\n", x);
		}
	}
	memcpy(&testG, &G, sizeof(struct gameState));

	cardEffect(adventurer, choice1, choice2, choice3, &G, handpos, &bonus);
	changeCheck(&G,&testG);


	return 0 ;
}
