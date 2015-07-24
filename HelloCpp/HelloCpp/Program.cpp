#include <iostream>
#include "Bruch.h"
using namespace std;

int main(){

	Bruch x;
	Bruch a(7, 3);

	const Bruch y(10);
	{
		Bruch* bp = new Bruch(32, 87);
		a.print();

		x = a;
		a = Bruch(1000);
		x.print();
		a.print();
		bp->print();
		(*bp).print();
		delete bp;
	}
	return 0;
}