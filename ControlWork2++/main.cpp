#include <iostream>
#include <fstream>
#include "sorts.h"
#include "arraywork.h"

int main(int argc, char** argv, int count_of_steps) {
	std::cout << '\t' << "Bubble sort" << '\t' << "Insertion sort" << '\t' << "Selection sort" << '\t' << "Counting sort" << '\t' << "Quick sort" << '\t' << "Merge sort" << std::endl;
	int steps[7]{100,250,1000,5000,10000,100000,1000000};
	int sizes[8]{100,500,1000,10000,100000,200000,1000000,10000000};
	void(*sorts[6])(int*, int) = {bubbleSort, insertionSort, selectionSort, countingSort, quickSort, mergeSort};
	int sizer = 0;
	FILE* f;
//	int step;
	f = fopen("data.txt", "w");
//	f = fopen(argv[1], "r");
//	for(int i = 0; i < count_of_steps; i++) {
//		fscanf(f, "%d ", &step);
//	}
	for(int steper = 0; steper < 7; ++steper) {
		while(sizes[steper] <= sizes[sizer+1]) {
			int* ar = new int[sizes[steper]];
			int p = (sizes[sizer+1] - sizes[sizer]) / steps[steper];
			std::cout << sizes[steper] << '\t';
			for(int i = 0; i < 6; ++i) { 
				if(sorts[i] == nullptr) { std::cout << '\t' << '\t'; continue; }
				randomAr(&ar[0], sizes[sizer]);
				double time = sortTime(sorts[i], &ar[0], sizes[sizer]);
				if(time >= 60.0) { sorts[i] = nullptr; }
				addSortTimeToFile(f, i, time);
			}
			std::cout << std::endl;
			sizes[steper] += steps[steper];
			delete [] ar;
		}
		sizer++;
	}
	fclose(f);
	return 0;
}
