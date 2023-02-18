#include <iostream>
#include <chrono>
#include "quick_n_merge_sorts_time.h"
#include "often_used_functions.h"
#include "sorts.h"


void test_QuickMergeSorts() {
    std::cout << "\t\t\t\t" << "Quick sort" << '\t' << "Merge sort" << std::endl;
    int size = 1000000;
    int* ar = new int[size];
    randomAr(&ar[0], size);
    { /* test unsorted arrays (->)  */
        std::cout << "Sort unsorted (min -> max)" << '\t';
        std::chrono::time_point<std::chrono::high_resolution_clock> start1;
        std::chrono::time_point<std::chrono::high_resolution_clock> end1;
        start1 = std::chrono::high_resolution_clock::now();
        quickSort(&ar[0], size);
        end1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff1 = end1 - start1;
        std::cout << diff1.count() << '\t';
    // -------------------------------------------
        std::chrono::time_point<std::chrono::high_resolution_clock> start2;
        std::chrono::time_point<std::chrono::high_resolution_clock> end2;
        start2 = std::chrono::high_resolution_clock::now();
        mergeSort(&ar[0], size);
        merge(&ar[0], size, size/2);
        end2 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff2 = end2 - start2;
        std::cout << diff2.count() << std::endl;
    }
    { /* test sorted arrays (->) */
        std::cout << "Sort sorted (min -> max)" << '\t';
        std::chrono::time_point<std::chrono::high_resolution_clock> start1;
        std::chrono::time_point<std::chrono::high_resolution_clock> end1;
        start1 = std::chrono::high_resolution_clock::now();
        quickSort(&ar[0], size);
        end1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff1 = end1 - start1;
        std::cout << diff1.count() << '\t';
    // -------------------------------------------
        std::chrono::time_point<std::chrono::high_resolution_clock> start2;
        std::chrono::time_point<std::chrono::high_resolution_clock> end2;
        start2 = std::chrono::high_resolution_clock::now();
        mergeSort(&ar[0], size);
        merge(&ar[0], size, size/2);
        end2 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff2 = end2 - start2;
        std::cout << diff2.count() << std::endl;
    }
}
