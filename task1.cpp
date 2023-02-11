#include <iostream>
#include "task1.h"

void Task1::testAr(Task1* tasker) {

    std::cout << "---- TASK №1 ----" << std::endl;

    { /* test_1 */ std::cout << "---- Test №1 ----";
        const int SIZE1 = 100; int ar1[SIZE1]; const int MAXELEM1 = 150; int counter1[MAXELEM1]; int minElem1 = 100;
        srand(time(nullptr));
        for(int i = 0; i < SIZE1; i++) {
            ar1[i] = minElem1 + rand() % (MAXELEM1 - minElem1);
        }
        std::cout << std::endl;
        tasker->showAr(&ar1[0], SIZE1, 10, 10);
        tasker->arCounter(&counter1[0], MAXELEM1);
        tasker->countingSort(&ar1[0], SIZE1, &counter1[0], MAXELEM1);
        tasker->showAr(&ar1[0], SIZE1, 10, 10);
        tasker->isSorted(&ar1[0], SIZE1);
    }
    { /* test_2 */ std::cout << "---- Test №2 ----";
        const int SIZE2 = 100; int ar2[SIZE2]; const int MAXELEM2 = 150; int counter2[MAXELEM2]; int minElem2 = 100;
        srand(time(nullptr));
        for(int i = 0; i < SIZE2; i++) {
            ar2[i] = minElem2 + rand() % (MAXELEM2 - minElem2);
        }
        std::cout << std::endl;
        tasker->showAr(&ar2[0], SIZE2, 10, 10);
        tasker->arCounter(&counter2[0], MAXELEM2);
        tasker->countingSort(&ar2[0], SIZE2, &counter2[0], MAXELEM2);
        tasker->showAr(&ar2[0], SIZE2, 10 ,10);
        tasker->isSorted(&ar2[0], SIZE2);
    }
    { /* test_3 */ std::cout << "---- Test №3 ----";
        const int SIZE3 = 100; int ar3[SIZE3]; const int MAXELEM3 = 150; int counter3[MAXELEM3]; int minElem3 = 100;
        srand(time(nullptr));
        for(int i = 0; i < SIZE3; i++) {
            ar3[i] = minElem3 + rand() % (MAXELEM3 - minElem3);
        }
        std::cout << std::endl;
        tasker->showAr(&ar3[0], SIZE3, 10, 10);
        tasker->arCounter(&counter3[0], MAXELEM3);
        tasker->countingSort(&ar3[0], SIZE3, &counter3[0], MAXELEM3);
        tasker->showAr(&ar3[0], SIZE3, 10, 10);
        tasker->isSorted(&ar3[0], SIZE3);
    }
    { /* test_4 */ std::cout << "---- Test №4 ----";
        const int SIZE4 = 100; int ar4[SIZE4]; const int MAXELEM4 = 150; int counter4[MAXELEM4]; int minElem4 = 100;
        srand(time(nullptr));
        for(int i = 0; i < SIZE4; i++) {
            ar4[i] = minElem4 + rand() % (MAXELEM4 - minElem4);
        }
        std::cout << std::endl;
        tasker->showAr(&ar4[0], SIZE4, 10, 10);
        tasker->arCounter(&counter4[0], MAXELEM4);
        tasker->countingSort(&ar4[0], SIZE4, &counter4[0], MAXELEM4);
        tasker->showAr(&ar4[0], SIZE4, 10, 10);
        tasker->isSorted(&ar4[0], SIZE4);
    }
    std::cout << std::endl;
}

void Task1::showAr(int* ar, int size, int height, int width) {
    for(int i = 0; i < size; i++) {
        if(i % width == 0 && i % height == 0) {
            std::cout << std::endl;
        }
        std::cout << ar[i] << "  ";
    }
    std::cout << std::endl;
}

void Task1::arCounter(int* counter, int maxElem) {
    for(int i = 0; i < maxElem; i++) {
        counter[i] = 0;
    }
}

void Task1::countingSort(int* ar, int size, int* counter, int maxElem) {
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

void Task1::isSorted(int* ar, int size) {
    int counter = size;
    for(int i = 0; i < size; ++i) {
        if(ar[i] <= ar[i + 1]) --counter;
    }
    if((counter - 1) == 0) std::cout << "-- Test passed! --" << std::endl;
}










