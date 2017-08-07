#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "rngs.h"

void changeCheck(int card, struct gameState *G, struct gameState *testG)
{
	if(G->coins != testG->coins)
		{
			printf("Error: Number of Coins has changed.\n");
		}
	else if(G->numBuys != testG->numBuys)
		{
			printf("Error: Number of Buys is different.\n");
		}
	else if(G->supplyCount[card] != testG->supplyCount[card])
		{
			printf("Error: Number of cards in draw pile changed.\n");
		}
	else
		{
			printf("Past Check Changes Test.\n");
		}
			printf("Coins should Be: %d and is %d.\n",G->coins,testG->coins);
			printf("Number of Buys should Be: %d and is %d.\n",G->numBuys,testG->numBuys);
			printf("Supply Count should Be: %d and is %d.\n\n",G->supplyCount[card],testG->supplyCount[card]);
}

void checkDeductions(int card, struct gameState *G, struct gameState *testG)
{
	if(G->coins != (testG->coins-getCost(card)))
		{
			printf("Error: Number of Coins has not been deducted.\n");
		}
	else if(G->numBuys != (testG->numBuys-1))
		{
			printf("Error: Number of Buys has not been deducted.\n");
		}
	else if(G->supplyCount[card] != (testG->supplyCount[card]-1))
		{
			printf("Error: Number of cards is different.\n");
		}
	else
		{
			printf("Past Check Changes Test.\n");
		}
			printf("Coins should Be: %d and is %d.\n",G->coins,(testG->coins-getCost(card)));
			printf("Number of Buys should Be: %d and is %d.\n",G->numBuys, (testG->numBuys-1));
			printf("Supply Count should Be: %d and is %d.\n\n",G->supplyCount[card], (testG->supplyCount[card]-1));
}

int main(){
	struct gameState G, testG;
	int numberOfPlayers = 2;
	int kards[10]={adventurer, council_room, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
	int seed = 45;

/* Testing buyCard when not enough coins exists for user attempting buy.*/
	printf("Testing buyCard when not enough coins exists for user attempting buy.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	G.coins = 0;
	memcpy(&testG, &G, sizeof(struct gameState));
	buyCard(council_room,&G);
	changeCheck(1,&G,&testG);

/* Testing buyCard when not enough buys exists for user attempting buy.*/
	printf("Testing buyCard when not enough buys exists for user attempting buy.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	G.numBuys = 0;
	memcpy(&testG, &G, sizeof(struct gameState));
	buyCard(council_room,&G);
	changeCheck(1,&G,&testG);

/* Testing buyCard when not enough cards in the buy pile exists for user attempting buy.*/
	printf("Testing buyCard when not enough cards exists in buy pile for user attempting buy.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	G.supplyCount[council_room] = 0;
	memcpy(&testG, &G, sizeof(struct gameState));
	buyCard(council_room,&G);
	changeCheck(1,&G,&testG);

/* Testing buyCard changes correct gamestate data after buy.*/
	printf("Testing buyCard changes correct gamestate data after buy.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	G.coins = 5;
	memcpy(&testG, &G, sizeof(struct gameState));
	buyCard(council_room,&G);
	checkDeductions(council_room,&G,&testG);

/* Testing buyCard when selecting a card that is not part of the kingdom cards.*/ 
	printf("Testing buyCard when selecting a card that is not part of the kingdom cards.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	G.coins = 5;
	memcpy(&testG, &G, sizeof(struct gameState));
	buyCard(embargo,&G);
	changeCheck(1,&G,&testG);
	return 0 ;
}
