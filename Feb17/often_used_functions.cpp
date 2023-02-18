#include <iostream>
#include <chrono>
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

void sortTime(void(*sort)(int*, int), int* ar, int size) {
    std::chrono::time_point<std::chrono::high_resolution_clock> start1;
    std::chrono::time_point<std::chrono::high_resolution_clock> end1;
    start1 = std::chrono::high_resolution_clock::now();
    sort(&ar[0], size);
    end1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff1 = end1 - start1;
    std::cout << diff1.count() << '\t';
}
