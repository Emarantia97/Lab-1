// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	auto myScreen = Screen{6,6}; //create screen
	myScreen.forward(); //move cursor
	myScreen.set('*'); //draw
	myScreen.down();    //move down
	myScreen.set('*');  //draw
	myScreen.move(3,3); //move to certain position
	myScreen.set("---");    //draw

	myScreen.display(); //display
	cout << endl;

	auto squareScreen = Screen{10,10}; //create screen
	squareScreen.drawSquare(7,7,7);

	squareScreen.display();

	myScreen.reSize(16,16);
	myScreen.display();
	myScreen.clear(' ');

	myScreen.move(7,7);
	myScreen.set("BIG");
	myScreen.move(8,5);
	myScreen.set("SCREEN");
	myScreen.display();

	return 0;
}

