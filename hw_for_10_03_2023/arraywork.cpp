#include <iostream>
#include <chrono>
#include <cmath>
#include <vector>
#include <fstream>
#include "arraywork.h"

void randomAr(int* ar, int size) {
    	srand(time(nullptr));
    	for(int i = 0; i < size; i++) {
        	ar[i] = rand() % 999;
    	}
}

double sortTime(void(*sort)(int*, int), int* ar, int size) {
    	std::chrono::time_point<std::chrono::high_resolution_clock> start;
    	std::chrono::time_point<std::chrono::high_resolution_clock> end;
    	start = std::chrono::high_resolution_clock::now();
    	sort(&ar[0], size);
    	end = std::chrono::high_resolution_clock::now();
    	std::chrono::duration<double> diff = end - start;
    	std::cout << round(diff.count()*100000)/100000 << '\t' << '\t';
	return diff.count();
}

double addSortTimeToFile(FILE* f, int i, double time) {
	if(i < 5) { fprintf(f, "%f\t", time); }
	if(i == 5) { fprintf(f, "%f\n", time); }
}
