#include <iostream>
#include "often_used_functions.h"

void randomAr(int* ar, int size, int maxElement) {
    srand(time(nullptr));
    for(int i = 0; i < size; i++) {
        ar[i] = rand() % maxElement;
    }
}

void showArForTask0(int* ar, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << '#' << '\t' << ar[i] << '\n';
    }
}

void showArForTask1(int* ar, int size, int height, int width) {
    for(int i = 0; i < size; i++) {
        if(i % width == 0 && i % height == 0) {
            std::cout << std::endl;
        }
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}

void showArForTasks_2_3(int* ar, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}
