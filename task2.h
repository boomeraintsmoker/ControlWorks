#ifndef TASK2_H
#define TASK2_H

#include <limits>

class Task2 {
public:
	int* maxElem = new int;
	int* minElem = new int;
public:
	~Task2() {
		delete maxElem;
		delete minElem;
	}
    void testMinMax(Task2*);
    int maxSearch(int* ar, int size);
    int minSearch(int* ar, int size);
};
#endif
