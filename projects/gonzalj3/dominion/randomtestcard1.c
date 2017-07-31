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
#include "rngs.h"

#define KARD "salvager"

void oracle(int player, int card, int cardPlacement, struct gameState *G, struct gameState *testG)
{
	int x=0, numFeast =0; 
	if(G->coins != (testG->coins+4))
		{
			printf("Error: Number of Coins has not increased by the correct number of coins.\n");
		}
	else if(G->numBuys != (testG->numBuys+1))
		{
			printf("Error: Number of Buys has not increased by one.\n");
		}
	else if(G->supplyCount[card] == (testG->supplyCount[card]+1))
		{
			printf("Error: Number of cards in draw pile has increased when no change should have occurred.\n");
		}
	else if(G->handCount[0] != (testG->handCount[0]-1))
		{
			printf("Error: Number of cards player's hand did not decrease.\n");
		}		
	else if(G->deckCount[0] != (testG->deckCount[0]-1))
		{
			printf("Error: Number of cards in the player's hand and deck did not decrease.\n");
		}	
	else
		{
			printf("Past Check Changes Test.\n");
		}
			printf("Coins should Be: %d and is %d.\n",G->coins,testG->coins+4);
			printf("Number of Buys should Be: %d and is %d.\n",G->numBuys,testG->numBuys+1);
	for(; x<G->handCount[0];x++)
	{
		if(G->hand[0][x]==feast)
		{
			numFeast++;
		}	
	}
	printf("The number of feast card piles is %d and is suppose to be 0. \n",numFeast);	}


int main(){
	srand(time(NULL));
	struct gameState G, testG;
	int numberOfPlayers = 2;
	int kards[10];
	int allKards[27]={curse,estate,duchy,province,copper,silver,gold,adventurer,council_room,feast,gardens,mine,remodel,smithy,village,baron,great_hall,minion,steward,tribute,ambassador,cutpurse,embargo,outpost,salvager,sea_hag,treasure_map};
	int handpos = 0, choice1 = 0, choice2 = 0, choice3 = 0, bonus = 0;
	int x;
	int sacrificeKard;
	int player, handMaxCount, trashCard, cardPlacement;

	printf("Testing salvager.\n");

	for( x = 0; x < 10; x++)
	{
		for(y = 0; y < sizeof(struct gameState); i++)
		{
			((char*)&G)[i] = floor(rand() % 256);
		}
		//The player and its hand are random.
		player = floor(rand() % 4);
		handMaxCount = floor(rand() % MAX_HAND);
		G.handcount[player]= handMaxCount;
		
		//This will build a random deck, the deck will be filled with random cards. 
		for(a = 0; a < 10; a++)
		{
			cardOptions = floor(rand() % 27); 
			kards[a] = allKards[cardOptions];
		}


		//I will use these two variables to pick a random card and a random place to place this card in the
		// players hand.
		trashCard = floor(rand() % 10);
		cardPlacement = floor(rand() % handMaxCount);

		// I decided that 10 number of buys and 40 coins would be a bit unlikely in 
		// a game of Dominion but still within the bounds of possibility for the number of buys.
		G.numBuys = floor(rand() % 10); 
		G.coins = floor(rand() % 40);
		
		//I am assigning a random card to a random place in the random player's hand.
		//This is the card that the salvager will utilize to trash
		G.hand[player][cardPlacement] = kards[trashCard];

		//I make a copy of the gamestate to use in the oracle.	
		memcpy(&testG, &G, sizeof(struct gameState));

		cardEffect(salvager, choice1, choice2, choice3, &G, cardPlacement, &bonus);

		oracle(player, KARD, cardPlacement, &G, &testG);
	
	}



	return 0 ;
}
