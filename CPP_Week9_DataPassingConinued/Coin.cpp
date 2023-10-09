#include "Coin.h"
#include <cstdlib> //rand(), srand()
#include <ctime> // time()
#include <iostream>
using namespace std;


void Coin::toss()
{
	int randNum;

	int max = 2, min = 1;

	

	randNum = (rand() % (max - min + 1)) + 1;
	//equivalent to rand() % 2 + 1

	if (randNum == 1) {
		sideUp = "heads";
	}
	else {
		sideUp = "tails";
	}

}

void Coin::doToss(string* array, int &Hcount, int &Tcount)
{
	srand(time(0)); //seed the RNG with curr seconds (will most likely be to slow), Was To slow
	//what placing it outside the toss function does is it just set the seed once instead of constantly resetting it 

	for (int i = 0; i < 100; i++) {
		toss();
		array[i] = getSideUp();

		if (array[i] == "heads"){
			Hcount++;
		}
		else if (array[i] == "tails") {
			Tcount++;
		}

	}
	
	

}

string Coin::getSideUp()
{
	return sideUp; //Return By Value
}

void Coin::setSideUp(string newSide)
{
	sideUp = newSide;
}

void Coin::calcStats(int& Hcount, int& Tcount)
{
	double ratioHT = -1;
	ratioHT = static_cast<double>(Hcount) / Tcount;

	cout << ratioHT;

}
