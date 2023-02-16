#include <iostream>
#include "task1.h"
#include "often_used_functions.h"

void testsAr() {
    std::cout << std::endl;
    { /* test_1 */ std::cout << "---- Test №1 ----";
        const int SIZE1 = 100;
        int ar1[SIZE1];
        const int MAXELEM1 = 150;
        int counter1[MAXELEM1];
        int minElem1 = 100;
    // ---------------------
        srand(time(nullptr));
        for(int i = 0; i < SIZE1; i++) {
            ar1[i] = minElem1 + rand() % (MAXELEM1 - minElem1);
        }
        std::cout << std::endl;
    // ---------------------
        showArForTask1(&ar1[0], SIZE1, 10, 10);
        putZerosInAr(&counter1[0], MAXELEM1);
        countingSort(&ar1[0], SIZE1, &counter1[0], MAXELEM1);
        showArForTask1(&ar1[0], SIZE1, 10, 10);
    }
    std::cout << std::endl;
    { /* test_2 */ std::cout << "---- Test №2 ----";
        const int SIZE2 = 100;
        int ar2[SIZE2];
        const int MAXELEM2 = 150;
        int counter2[MAXELEM2];
        int minElem2 = 100;
    // ---------------------
        srand(time(nullptr));
        for(int i = 0; i < SIZE2; i++) {
            ar2[i] = minElem2 + rand() % (MAXELEM2 - minElem2);
        }
        std::cout << std::endl;
    // ---------------------
        showArForTask1(&ar2[0], SIZE2, 10, 10);
        putZerosInAr(&counter2[0], MAXELEM2);
        countingSort(&ar2[0], SIZE2, &counter2[0], MAXELEM2);
        showArForTask1(&ar2[0], SIZE2, 10, 10);
    }
    std::cout << std::endl;
    { /* test_3 */ std::cout << "---- Test №3 ----";
        const int SIZE3 = 100;
        int ar3[SIZE3];
        const int MAXELEM3 = 150;
        int counter3[MAXELEM3];
        int minElem3 = 100;
    // ---------------------
        srand(time(nullptr));
        for(int i = 0; i < SIZE3; i++) {
            ar3[i] = minElem3 + rand() % (MAXELEM3 - minElem3);
        }
        std::cout << std::endl;
    // ---------------------
        showArForTask1(&ar3[0], SIZE3, 10, 10);
        putZerosInAr(&counter3[0], MAXELEM3);
        countingSort(&ar3[0], SIZE3, &counter3[0], MAXELEM3);
        showArForTask1(&ar3[0], SIZE3, 10, 10);
    }
    std::cout << std::endl;
}

void putZerosInAr(int* counter, int maxElem) {
    for(int i = 0; i < maxElem; i++) {
        counter[i] = 0;
    }
}

void countingSort(int* ar, int size, int* counter, int maxElem) {
    for(int i = 0; i < size; i++) {
        counter[ar[i]]++;
    }
    int pos = 0;
    for(int i = 0; i < maxElem; i++) {
        for(int j = 0; j < counter[i]; j++) {
            ar[pos++] = i;
        }
    }
}
