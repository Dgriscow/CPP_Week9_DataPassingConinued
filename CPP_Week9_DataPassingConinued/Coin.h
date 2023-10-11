#pragma once
#include <string>
using namespace std;

class Coin {

private:
	string sideUp = "";


public:

	//Constructor Syntax
	Coin(); //Default Constructor 

	Coin(string startingSide); //Overloaded Constructor

	//Decstructor Code:
	~Coin(); //Destructor will run at program End.


	//When Creating Constructors put them in public, just because it makes sense when first PUBLICALLY declaring the class the constructors need to do stuff.


	void toss(); //toss a coin

	void doToss(string *array, int &Hcount, int &Tcount, int arraySize); //toss 100 times 

	string getSideUp();

	void setSideUp(string newSide);

	void calcStats(int &Hcount, int &Tcount);

	void printArrayValues(int *dynamicArray, int *staticArray, int arraySize);
};