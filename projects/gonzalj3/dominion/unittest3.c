/*
	Jose Gonzalez Assignment 3 362 - unittest3.c whoseTurn
*/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "rngs.h"

void changeCheck(int expectedValue, struct gameState *G)
{
	if(expectedValue != whoseTurn(G))
		{
			printf("Error: Number of whoseTurn does not return value that matches expected value.\n");
		}
	else
		{
			printf("Past Check Changes Test when player is %d.\n", G->whoseTurn);
		}
			printf("Current player should be: %d and is %d.\n",expectedValue,whoseTurn(G));
}

int main(){
	struct gameState G;
	int numberOfPlayers = 4;
	int kards[10]={adventurer, council_room, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
	int seed = 234;
	int x = 0;
	
/* Testing whoseTurn when not enough coins exists for user attempting buy.*/
	printf("Testing whoseTurn by changing gamestate manually and comparing expected and actual data.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	//G.coins = 0;
	//memcpy(&testG, &G, sizeof(struct gameState));
	for(;x<numberOfPlayers;x++)
	{
		G.whoseTurn = x;
		changeCheck(x,&G);
	}
	
	return 0;
}
