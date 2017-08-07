/*
	Jose Gonzalez Assignment 3 362 - randomtestcard3.c smithy
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

#define KARD "smithy"

void oracle(int player, int randomCard1, int randomCard2, int randomCard3, struct gameState *G, struct gameState *oldG)
{
	int x;
	int counter = 0;
	if(G->handCount[player] != (oldG->handCount[player]-1))
		{
			printf("Error: Number of cards player's hand did not decrease.\n");
		}
	else if(G->deckCount[player] != oldG->deckCount[player]-3)
	{
			printf("Error: Number of cards in player's deck did not decrease by 3.\n");
	}
	else
		{
			printf("Past 2 of 3 Check Changes Test.\n");
		}
			//printf("Hand count should Be: %d and is %d.\n",G->handCount[0],testG->handCount[0]+3);
			//printf("Number of Buys should Be: %d and is %d.\n",G->numBuys,testG->numBuys+1);
			
	for(x = 0; x<G->handCount[player];x++)
	{
		if(G->hand[player][x] ==randomCard1)
		{
			counter++;
		}
		if(G->hand[player][x] ==randomCard2)
		{
			counter++;
		}
		if(G->hand[player][x] ==randomCard2)
		{
			counter++;
		}
	}
	
	if(counter!=3)
	{
		printf("Drawned cards are not in player's hand\n");
	}
	else
	{
		printf("Passed final test\n");
	}
	
	
		
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
	int player, handMaxCount, trashCard, cardPlacement, randomCard1, randomCard2, randomCard3;

	player = 0;
	handMaxCount = 10;

	printf("Testing smithy.\n");

	for( x = 0; x < 1000; x++)
	{
		

	int kards[10]={adventurer, council_room, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
		player = (rand() % 4 + 1);	
		initializeGame(player,kards,234,&G);

		//The player and its hand are random.

		G.handCount[player]= (rand() % 10);
		G.deckCount[player]= (rand() % 100);

		//I will use these two variables to pick a random card and a random place to place this card in the
		// players hand.
		randomCard1 = (rand() % 10);
		randomCard2 = (rand() % 10);
		randomCard3 = (rand() % 10);
		
		G.deck[player][G.deckCount[player]-1]=kards[randomCard1];
		G.deck[player][G.deckCount[player]-2]=kards[randomCard2];
		G.deck[player][G.deckCount[player]-3]=kards[randomCard3];

		
		//I make a copy of the gamestate to use in the oracle.	
		memcpy(&testG, &G, sizeof(struct gameState));
		
		cardEffect(smithy, choice1, choice2, choice3, &G, handPos, &bonus);
		oracle(player, randomCard1, randomCard2, randomCard3,&G, &testG);
	
	}



	return 0 ;
}
