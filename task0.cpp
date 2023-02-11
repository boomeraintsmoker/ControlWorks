#include <iostream>
#include "task0.h"

void randomAr(int* ar, int size, int range) {
    std::cout << "---- TASK №0 ----" << std::endl;
    srand(time(nullptr));
    for(int i = 0; i < size; i++) {
        ar[i] = rand() % range;
    }
}

void showAr(int* ar, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << '#' << '\t' << ar[i] << '\n';
    }
}	
