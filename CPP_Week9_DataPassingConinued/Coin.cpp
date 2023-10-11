#include "Coin.h"
#include <cstdlib> //rand(), srand()
#include <ctime> // time()
#include <iostream>
using namespace std;




Coin::Coin()
{
	//this does go off every time no matter what, but its important to go off incase no value was given OR no value could be retrived in time (Example: Async Await Operations)

	cout << "No Arguments Given" << endl;

	sideUp = "tails";
}

Coin::Coin(string startingSide)
{
	cout << "Starting Face Value Given: " << startingSide << endl;
	sideUp = startingSide; //example of giving a constructor a parameter and setting a class value to it at the declaration of the class

}

Coin::~Coin()
{
	cout << "Coin Object Has Successfully Been Destroyed\n";
}


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

void Coin::doToss(string* array, int &Hcount, int &Tcount, int arraySize)
{
	srand(time(0)); //seed the RNG with curr seconds (will most likely be to slow), Was To slow
	//what placing it outside the toss function does is it just set the seed once instead of constantly resetting it 

	for (int i = 0; i < arraySize; i++) {
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

	cout << "Coin Ratio: " << ratioHT;

}

void Coin::printArrayValues(int* dynamicArray, int* staticArray, int arraySize)
{

	for (int i = 0; i < arraySize; i++) {
		*(staticArray + i) = i; //example of accessing 
		*(dynamicArray + i) = 2 * i;
	}

	//static loop out:
	for (int i = 0; i < arraySize; i++) {
		cout << "Static Array Item: " << *(staticArray +i) << endl;
			
	}

	cout << endl;

	for (int i = 0; i < arraySize; i++) {
		cout << "Dynamic Array Item: " << *(dynamicArray + i) << endl;
	}

	*(dynamicArray + 101) = 43;
	cout << *(dynamicArray + 101) << " DYNAMIC!\n"; //example of adding a new unexpected item to the array, and printing it out.
}
