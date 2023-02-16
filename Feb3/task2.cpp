#include <iostream>
#include <limits>
#include "task2.h"
#include "often_used_functions.h"

void testMinMax() {
    std::cout << std::endl;
    { /* test_1 */ std::cout << "---- Test №1 ----" << std::endl;
        const int SIZE1 = 10;
        int ar1[SIZE1];
        int maxELement1 = 500;
    // -----------------------
        srand(time(nullptr));
        for(int i = 0; i < SIZE1; i++) {
            ar1[i] = rand() % maxELement1;
        }
        std::cout << std::endl;
    // -----------------------
        showArForTasks_2_3(&ar1[0], SIZE1);
        maxSearch(&ar1[0], SIZE1);
        minSearch(&ar1[0], SIZE1);
    }
    std::cout << std::endl;
    { /* test_2 */ std::cout << "---- Test №2 ----" << std::endl;
        const int SIZE2 = 10;
        int ar2[SIZE2];
        int maxELement2 = 12800;
    // -----------------------
        srand(time(nullptr));
        for(int i = 0; i < SIZE2; i++) {
            ar2[i] = rand() % maxELement2;
        }
        std::cout << std::endl;
    // -----------------------
        showArForTasks_2_3(&ar2[0], SIZE2);
        maxSearch(&ar2[0], SIZE2);
        minSearch(&ar2[0], SIZE2);
    }
    std::cout << std::endl;
    { /* test_1 */ std::cout << "---- Test №3 ----" << std::endl;
        const int SIZE3 = 10;
        int ar3[SIZE3];
        int maxELement3 = 500;
    // -----------------------
        srand(time(nullptr));
        for(int i = 0; i < SIZE3; i++) {
            ar3[i] = rand() % maxELement3;
        }
        std::cout << std::endl;
    // -----------------------
        showArForTasks_2_3(&ar3[0], SIZE3);
        maxSearch(&ar3[0], SIZE3);
        minSearch(&ar3[0], SIZE3);
    }
    std::cout << std::endl;
}

int maxSearch(int* ar, int size) {
    static int i = 0;
    static int depth = 0;
    depth++;
	static int maxElem = ar[0];
    if(i < size) {
        if(ar[i] > maxElem) {
            maxElem = ar[i];
        }
        i++;
        return maxSearch(ar, size);
    }
	std::cout << "Maximum - " << maxElem << std::endl;
	i = 0;
    depth = 0;
    maxElem = std::numeric_limits<int>::min();
	return 1;
}

int minSearch(int* ar, int size) {
    static int i = 0;
    static int depth = 0;
    depth++;
    static int minElem = ar[0];
    if(i < size) {
        if(ar[i] < minElem) {
            minElem = ar[i];
        }
        i++;
        return minSearch(ar, size);
    }
    std::cout << "Minimum - " << minElem << std::endl;
	i = 0;
	depth = 0;
	minElem = std::numeric_limits<int>::max();
    return 1;
}
