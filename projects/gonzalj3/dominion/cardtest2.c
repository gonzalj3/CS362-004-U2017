/*
	Jose Gonzalez Assignment 3 362 - cardttest2.c seahag
*/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "rngs.h"

#define KARD "sea_hag"

void changeCheck(int currentPlayer, struct gameState *G, struct gameState *testG)
{
	int x = 0, i = 0, foundCurse = 0, foundDiscard = 0;
	
	for(; x<testG->numPlayers;x++)
	{
		if(x != currentPlayer)
		{
			for(; i< testG->deckCount[x];i++)
				{
					if(G->deck[x][i]!=testG->deck[x][i])
					{
						if(G->deck[x][i]==curse)
						{
							foundCurse++;
						}	
					}
				}
		}
	}
	
	if(foundCurse == 3)
	{
		printf("Past Test: Found curses.\n");
	}
	else
	{
		printf("Error: found only %d curses.\n",foundCurse);
	}
	
	x=0;
	
	for(; x<G->discardCount[currentPlayer];x++)
	{
		if(G->discard[currentPlayer][x] != testG->discard[currentPlayer][x])
		{
			foundDiscard++;
		}
	}
	
	if(foundCurse != 1)
	{
		printf("Error: Player does not have a new discarded card.\n");
	}
	
	if(G->discardCount[currentPlayer]==testG->discardCount[currentPlayer])
	{
		printf("Error: Player did not increase discard count.\n");
	}
}

int main(){
	struct gameState G, testG;
	int numberOfPlayers = 4;
	int kards[10]={adventurer, salvager, sea_hag, gardens, mine
               , remodel, smithy, village, baron, great_hall};
	int handpos = 0, choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0;
	int seed = 45;

	printf("Testing seahag after initializing game, so current player should be 0.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	memcpy(&testG, &G, sizeof(struct gameState));
	cardEffect(sea_hag, choice1, choice2, choice3, &G, handpos, &bonus);
	changeCheck(0,&G,&testG);


	return 0 ;
}
