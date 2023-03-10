#include <iostream>
#include "sorts.h"
#include "arraywork.h"

int main() {
	std::cout << '\t' << "Bubble sort" << '\t' << "Insertion sort" << '\t' << "Selection sort" << '\t' << "Counting sort" << '\t' << "Quick sort" << '\t' << "Merge sort" << std::endl;
	int steps[7]{100,250,1000,5000,10000,100000,1000000};
	int sizes[8]{100,500,1000,10000,100000,200000,1000000,10000000};
	void(*sorts[6])(int*, int) = {bubbleSort, insertionSort, selectionSort, countingSort, quickSort, mergeSort};
	int sizer = 0;
	for(int steper = 0; steper < 7; ++steper) {
		while(sizes[steper] <= sizes[sizer+1]) {
			int* ar = new int[sizes[steper]];
			int p = (sizes[sizer+1] - sizes[sizer]) / steps[steper];
			std::cout << sizes[steper] << '\t';
			double time;
			for(int i = 0; i < 6; ++i) {
				randomAr(&ar[0], sizes[sizer]);
				time = sortTime(sorts[i], &ar[0], sizes[sizer]);
			}
			std::cout << std::endl;
			sizes[steper] += steps[steper];
			delete [] ar;
		}
		sizer++;
	}
	return 0;
}
