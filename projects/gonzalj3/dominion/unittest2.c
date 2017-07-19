/*
	Jose Gonzalez Assignment 3 362 - unittest2.c endTurn
*/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "rngs.h"

void changeCheck(int player, int playerFormer, struct gameState *G, struct gameState *oldG)
{
	int handStaySame = 0;
	int x =0;
	for(;x<oldG->handCount[playerFormer];x++)
	{
		if(oldG->hand[playerFormer][x] == G->hand[playerFormer][x])
		{
			handStaySame++;
		}			
	}
	x=0;

	if(G->whoseTurn == playerFormer)
		{
			printf("Error: Player has not changed. \n");
		}
	else if(G->coins == oldG->coins)
		{
			printf("Error: Number of coins is not different.\n");
		}
	else if(G->discardCount[playerFormer] <= oldG->discardCount[playerFormer])
		{
			printf("Error: Number of discarded cards for the former player %d, has not increased.\n",G->discardCount[player]);
		}
	else if(G->numActions != 1)
		{
			printf("Error: The number of buys is not the standard 1 at the beginning of a turn and is %d.\n",G->numActions);
		}
	else if(G->numBuys != 1)
		{
			printf("Error: The number of buys is not the standard 1 at the beginning of a turn and is %d.\n",G->numBuys);
		}
	else if(oldG->hand[playerFormer][0]==G->hand[playerFormer][0])
		{
			printf("Error: The former player's first card in their hand still exists.\n");
		}
	else if(oldG->handCount[playerFormer] <= G->handCount[playerFormer])
		{
			printf("Error: The hand count for the former player has not decreased.\n");
		}
	else if(handStaySame >0)
		{
			printf("Error: The hand for the former player has not changed for %d cards\n",handStaySame);
		}
else
		{
			printf("Past Check Changes Test.\n");
		}

			printf("Whose turn it is %d and was %d.\n",G->whoseTurn,oldG->whoseTurn);
			printf("Number of coins changed from preset %d for the former player to %d for the new player.\n",oldG->coins, G->coins);
			printf("Number of buys changed from preset %d for the former player to %d for the new player.\n",oldG->numBuys, G->numBuys); 
			printf("Number of actions changed from preset %d for the former player to %d for the new player.\n",oldG->numActions, G->numActions); 
					printf("Former players handcount went from %d to %d.\n", oldG->handCount[playerFormer], G->handCount[playerFormer]); 
			printf("Current players handcount went from %d to %d.\n", oldG->handCount[player], G->handCount[player]); 
			printf("Number of discarded cards for previous player was %d and now is %d.\n",oldG->discardCount[playerFormer],G->discardCount[playerFormer]);
			for(;x<oldG->handCount[playerFormer];x++)
			{
			printf("The Former player's hand included card %d and is now %d.\n",oldG->hand[playerFormer][x],G->hand[playerFormer][x]);
			}
}


int main(){
	struct gameState G, oldG;
	int numberOfPlayers = 2;
	int currentPlayer, previousPlayer;
	int kards[10]={ salvager,council_room, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
	int seed = 45;
	int x=0;

/* Testing endTurn when user is first player.*/
	printf("Testing endTurn after initilizaing game and first player turn ends.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	G.coins=100;
	G.numBuys=199;
	G.numActions=200;
	for(;x<G.handCount[0];x++)
	{
		G.hand[0][x]=kards[x];
		printf("hands will be %d\n",G.hand[0][x]);
	}
	memcpy(&oldG, &G, sizeof(struct gameState));
	previousPlayer = G.whoseTurn;
	endTurn(&G);
	currentPlayer = G.whoseTurn;
	changeCheck(currentPlayer, previousPlayer, &G,&oldG);

/* Testing endTurn when user is last player.*/
	x=0;
	printf("Testing endTurn after initilizaing game and last player turn ends.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	endTurn(&G);	
	G.coins=100;
	G.numBuys=199;
	G.numActions=200;
	for(;x<G.handCount[1];x++)
	{
		G.hand[1][x]=kards[x];
		printf("hands will be %d\n",G.hand[1][x]);
	}
	memcpy(&oldG, &G, sizeof(struct gameState));
	previousPlayer = G.whoseTurn;
	endTurn(&G);
	currentPlayer = G.whoseTurn;
	changeCheck(currentPlayer, previousPlayer, &G,&oldG);

	return 0;
}
