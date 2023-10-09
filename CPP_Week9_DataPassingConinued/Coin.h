#pragma once
#include <string>
using namespace std;

class Coin {

private:
	string sideUp = "";

	

	

public:
	void toss(); //toss a coin

	void doToss(string *array, int &Hcount, int &Tcount); //toss 100 times 

	string getSideUp();

	void setSideUp(string newSide);

	void calcStats(int &Hcount, int &Tcount);
};