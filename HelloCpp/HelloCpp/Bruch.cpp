#include "Bruch.h"

#include <stdio.h>
#include <stdlib.h>

Bruch::Bruch(){

	zaehler = 0;
	nenner = 1;
}

Bruch::Bruch(int z){

	zaehler = z;
	nenner = 1;
}

Bruch::Bruch(int z, int n){

	if (n == 0){
		printf("Fehler: Nenner ist 0\n");
		exit(1);
	}
	zaehler = z;
	nenner = n;
}

void Bruch::print(){

	printf("%d/%d\n", zaehler, nenner);
}
