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
        sortTime(quickSort, &ar[0], size, emptyFoo, &ar[0], size, &ar[0], size, false);
    // -------------------------------------------
        int* sAr = new int[size];
        sortTime(mergeSort, &ar[0], size, merge, &ar[0], size, &ar[0], size/2, true);
        delete [] sAr;
    }
    { /* test sorted arrays (->) */
        std::cout << "Sort sorted (min -> max)" << '\t';
        sortTime(quickSort, &ar[0], size, emptyFoo, &ar[0], size, &ar[0], size, false);
    // -------------------------------------------
        int* sAr = new int[size];
        sortTime(mergeSort, &ar[0], size, merge, &ar[0], size, &ar[0], size/2, true);
        delete [] sAr;
    }
}
