#ifndef BRUCH_H_
#define BRUCH_H_

class Bruch {

public:
	Bruch();
	Bruch(int);
	Bruch(int, int);
	void print();

private:
	int zaehler;
	int nenner;
};

#endif /* BRUCH_H_ */