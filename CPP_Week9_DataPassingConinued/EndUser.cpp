#include "Coin.h"
#include <string>
#include <iostream>
using namespace std;

int main() {

	Coin c;
	string sides[100];
	int tailsCount = 0, headsCount = 0;
	//string temp = "heads";
	//c.setSideUp(temp);

	string out = c.getSideUp();
	cout << out;
	//sides is a pointer to the first element of the array sides[0]
	//datatype of sides is a pointer to a string. so sides is a address to sides[0] 
	c.doToss(sides, headsCount, tailsCount); //Sides Array being passed by referene to doToss method

	c.calcStats(headsCount, tailsCount);


	for (int i = 0; i < 100; i++) {
		cout << sides[i] << endl;
	}
	cout << "OUTPUT:" << headsCount << " " << tailsCount << endl;

}