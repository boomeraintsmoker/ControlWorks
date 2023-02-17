#include <iostream>
#include "often_used_functions.h"

void randomAr(int* ar, int size) {
    srand(time(nullptr));
    for(int i = 0; i < size; i++) {
        ar[i] = rand() % 999;
    }
}

void showAr(int* ar, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << ar[i] << ' ';
    }
    std::cout << std::endl;
}
