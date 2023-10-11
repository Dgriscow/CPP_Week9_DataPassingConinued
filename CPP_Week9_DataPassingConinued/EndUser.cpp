#include "Coin.h"
#include <iostream>
using namespace std;

int main() {

	Coin c;

	Coin c2("heads");
	
	cout << "Starting Face Of the Coin: " << c.getSideUp() << endl;


	cout << "Starting Face Of the Coin: " << c2.getSideUp() << endl;


	
	string sides[100];

	int myNumbers[100] = { 1 }; //Declaration of a Static Allocated array with 100 int elements

	int* dyn_Numbers = new int[100]; //Declaration of a Dynamically Allocated array with 100 integer elements

	int tailsCount = 0, headsCount = 0;
	//string temp = "heads";
	//c.setSideUp(temp);

	c.printArrayValues(dyn_Numbers, myNumbers, 100);

	string out = c.getSideUp();
	cout << out;
	//sides is a pointer to the first element of the array sides[0]
	//datatype of sides is a pointer to a string. so sides is a address to sides[0] 
	c.doToss(sides, headsCount, tailsCount, 100); //Sides Array being passed by referene to doToss method

	c.calcStats(headsCount, tailsCount);


	for (int i = 0; i < 100; i++) {
		cout << sides[i] << endl;
	}
	cout << "OUTPUT:" << headsCount << " " << tailsCount << endl;

	return 1;
}