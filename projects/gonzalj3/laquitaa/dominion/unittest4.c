/*
	Jose Gonzalez Assignment 3 362 - unittest4.c isGameOver
*/
#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "rngs.h"

void changeCheck(struct gameState *G, int testNumber, int kards[10])
{
	int x = 0;
	int depletion = 0;
	if(isGameOver(G)!=1&&testNumber==0)
		{
			printf("Error: Does not recognize game is over when province pile is 0.\n");
		}
	else if(isGameOver(G)!=0&&testNumber==1)
		{
			printf("Error: isGameOver states game is over when game is not over since no rule for game over is true.\n");
		}
	else if(isGameOver(G)!=0&&testNumber==2)
		{
			printf("Error: isGameOver states game is over when game is not over since no rule for game over is true.\n");
		}
	else if(isGameOver(G)!=1&&testNumber==3)
		{
			printf("Error: Does not recognize game is over when three card piles are completely depleted.\n");
		}
	else if(isGameOver(G)==1&&testNumber==3)
		{
			printf("\nThe function isGameOver recognizes when three card piles are empty.\n");
		}
	else if(isGameOver(G)!=0&&testNumber==4)
		{
			printf("Error: isGameOver states game is over when game is NOT over since no rule for game over is true.\n");
		}					
	else
		{
			printf("Past Test.\n");
		}
	printf("Province pile has %d cards.\n", G->supplyCount[province]);
	for(; x<10;x++)
	{
		if(G->supplyCount[kards[x]]==0)
		{
			depletion++;
		}	
	}
	printf("The number of depleted card piles is %d. \n",depletion);	

}

int main(){
	struct gameState G;
	int numberOfPlayers = 2;
	int kards[10]={salvager, council_room, feast, gardens, mine, remodel, smithy, village, baron, great_hall};
	int seed = 637;
	int testNumber=0;

/* Testing isGameOver when province pile is 0.*/
	printf("Testing isGameOver when province pile is empty.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	G.supplyCount[province]=0;
	changeCheck(&G, testNumber, kards);
	
/* Testing isGameOver when three card stacks are completely depleted.*/
	printf("Testing isGameOver when  one to all of the following are card piles are empty: feast, gardens and baron.\n");
	initializeGame(numberOfPlayers, kards, seed, &G);
	
	/* Testing isGameOver when no card pile is empty */
	testNumber = 4;
	changeCheck(&G, testNumber, kards);
	
	/* Testing isGameOver when one card pile is empty */
	G.supplyCount[feast]=0;
	testNumber = 1;
	changeCheck(&G, testNumber, kards);
	
	/* Testing isGameOver when two card piles is empty */
	G.supplyCount[gardens]=0;
	testNumber = 2;
	changeCheck(&G, testNumber, kards);	
	
	/* Testing isGameOver when three card piles is empty */	
	G.supplyCount[baron]=0;
	testNumber = 3;
	changeCheck(&G, testNumber, kards);

	return 0;
}
