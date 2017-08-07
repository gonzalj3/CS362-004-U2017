/*
	Jose Gonzalez Assignment 3 362 - randomtestcard1.c salvager 
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

#define KARD "salvager"

void oracle(int player, int cardPlacement, int trashCard, struct gameState *G, struct gameState *testG)
{
	int trashCardValue; 
	trashCardValue = getCost(trashCard);
	if(G->handCount[player] != (testG->handCount[player]-1))
		{
			printf("Error: Number of cards in the player's hand did not decrease by one.\n");
		}
	else if(G->numBuys != (testG->numBuys+1))
		{
			printf("Error: Number of Buys has not increased by one.\n");
		}
	else if(G->coins == (testG->coins + trashCardValue))
		{
			printf("Error: Number of coins did not increase by the value of the trashed card.\n");
		}
	else if(G->hand[player][cardPlacement] == testG->hand[player][cardPlacement]) 
		{
			printf("Error: The player's hand still contains the trashed card.\n");
		}		
	else
		{
			printf("Past Check Changes Test.\n");
		}
			//printf("Coins should Be: %d and is %d.\n",G->coins,testG->coins);
			//printf("Number of Buys should Be: %d and is %d.\n",G->numBuys,testG->numBuys);
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

	printf("Testing salvager.\n");

	for( x = 0; x < 1000; x++)
	{
		

	int kards[10]={adventurer, council_room, feast, gardens, mine
               , remodel, smithy, village, baron, great_hall};
		player = (rand() % 4 + 1);	
		initializeGame(player,kards,234,&G);

		//The player and its hand are random.

		G.handCount[player]= (rand() % 10);

		//I will use these two variables to pick a random card and a random place to place this card in the
		// players hand.
		trashCard = (rand() % 10);
		cardPlacement = (rand() % handMaxCount);

		// I decided that 10 number of buys and 40 coins would be a bit unlikely in 
		// a game of Dominion but still within the bounds of possibility for the number of buys.
		G.numBuys = (rand() % 10); 
		G.coins = (rand() % 40);
		
		//I am assigning a random card to a random place in the random player's hand.
		//This is the card that the salvager will utilize to trash
		G.hand[player][cardPlacement] = kards[trashCard];
		
		//I make a copy of the gamestate to use in the oracle.	
		memcpy(&testG, &G, sizeof(struct gameState));
		
		cardEffect(salvager, cardPlacement, choice2, choice3, &G, handPos, &bonus);
		oracle(player, cardPlacement, trashCard,&G, &testG);
	
	}



	return 0 ;
}
