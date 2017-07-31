CFLAGS = -Wall -fpic -coverage -lm

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)

testDrawCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

badTestDrawCard: badTestDrawCard.c dominion.o rngs.o
	gcc -o badTestDrawCard -g  badTestDrawCard.c dominion.o rngs.o $(CFLAGS)

testBuyCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

testAll: dominion.o testSuite.c
	gcc -o testSuite testSuite.c -g  dominion.o rngs.o $(CFLAGS)

randomtestcard1: randomtestcard1.c dominion.o rngs.o
	gcc -o rtc1 randomtestcard1.c -g dominion.o rngs.o $(CFLAGS)

randomtestcard2: randomtestcard2.c dominion.o rngs.o
	gcc -o rtc2 randomtestcard2.c -g dominion.o rngs.o $(CFLAGS)

randomtestcard3: randomtestcard3.c dominion.o rngs.o
	gcc -o rtc3 randomtestcard3.c -g dominion.o rngs.o $(CFLAGS)
	
randomtestcard.out: dominion.o
	gcc -o rtc3 randomtestadventurer.c -g dominion.o rngs.o $(CFLAGS)
	./rtc3 >> randomtestadventurer.out
	gcov randomtestadventurer.c >> randomtestadventurer.out
	gcov dominion.c >> randomtestadventurer.out
	cat randomtestadventurer.c.gcov >> randomtestadventurer.out
	cat dominion.c.gcov >> randomtestadventurer.out
	
	gcc -o rtc2 randomtestcard2.c -g dominion.o rngs.o $(CFLAGS)
	./rtc2 >> randomtestcard2.out
	gcov randomtestcard2.c >> randomtestcard2.out
	gcov dominion.c >> randomtestcard2.out
	cat randomtestcard2.c.gcov >> randomtestcard2.out
	cat dominion.c.gcov >> randomtestcard2.out
	
	gcc -o rtc1 randomtestcard1.c -g dominion.o rngs.o $(CFLAGS)
	./rtc1 >> randomtestcard1.out
	gcov randomtestcard1.c >> randomtestcard1.out
	gcov dominion.c >> randomtestcard1.out
	cat randomtestcard1.c.gcov >> randomtestcard1.out
	cat dominion.c.gcov >> randomtestcard1.out


interface.o: interface.h interface.c
	gcc -c interface.c -g  $(CFLAGS)

runtests: testDrawCard 
	./testDrawCard &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out


player: player.c interface.o
	gcc -o player player.c -g  dominion.o rngs.o interface.o $(CFLAGS)

all: playdom player testDrawCard testBuyCard badTestDrawCard

clean:
	rm -f *.o playdom.exe playdom test.exe test player player.exe testInit testInit.exe *.gcov *.gcda *.gcno *.so *.out
