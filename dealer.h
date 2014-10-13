#ifndef __Dealer_h__
#define __Dealer_h__

#include "PRNG.h"
#include <string>
#include <time.h>
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

typedef struct CardStruct{
	string cNumber;			
	string cPicture;
}Cards;

class Start{
protected:
	int count; //put a card in count-th array
	Cards card[4][13];
	Cards used[30];
public:
	Start();
	~Start();
};

class Player: Start{
private:
	int instances;
	int Dinst;
	int sumP; //sum of player;s cards
	int sumD; //sum of dealer's cards
	int nP; //Player's n-th array is empty
	int nD; //Dealer's n-th array is empty
	double money; //current money
	char picks;
	Cards tempD[10];
	Cards tempP[10];
public:
	Player();
	~Player();
	string space(string);
	int sum(Cards*, int); //sum of cards
	bool Csearch(Cards); //check if the card is already dealt
	void deal();
	void image(Cards*,int);
	void image(Cards, int);
	void init();
	void choice(int);
	void shuffle();
};

#endif