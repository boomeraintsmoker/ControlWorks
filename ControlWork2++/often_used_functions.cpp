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

void sortTime(void(*sort)(int*, int), int* ar, int size, void(*sort1)(int*, int, int*, int), int* ar1, int size1, int* counter, int max_or_center, bool isLast) {
    std::chrono::time_point<std::chrono::high_resolution_clock> start;
    std::chrono::time_point<std::chrono::high_resolution_clock> end;
    start = std::chrono::high_resolution_clock::now();
    sort(&ar[0], size);
    sort1(&ar1[0], size1, &counter[0], max_or_center);
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;
    if(isLast == false) {
        std::cout << diff.count() << '\t';
    }
    if(isLast == true) {
        std::cout << diff.count() << std::endl;
    }
}

//bool isMoreTheSixty(void(*sortTime)(void(*sort)(int*, int), int* ar, int size)) {
//    if(sortTime > )
//}
