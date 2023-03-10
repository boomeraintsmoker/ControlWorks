#include <iostream>
#include "steps.h"
#include "often_used_functions.h"
#include "sorts.h"

void test_sorts() {
    std::cout << '\t' << "Bubble sort" << '\t' << "Insertion sort" << '\t' << "Selection sort" << '\t' << "Counting sort" << '\t' << "Quick sort" << '\t' << "Merge sort" << std::endl;
    { /* test_1 (step: 100, size: 100 - 500) */
        int i = 0;
        int step = 100;
        int max_size = 500;
        int min_size = 100;
        int delta_size = max_size / min_size;
        while(i < delta_size) {
            int* ar = new int[min_size];
            std::cout << min_size << '\t';
        // --------------------------------
        // bubble sort
            randomAr(&ar[0], min_size);
            sortTime(bubbleSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // insertion sort
            randomAr(&ar[0], min_size);
            sortTime(insertionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // selection sort
            randomAr(&ar[0], min_size);
            sortTime(selectionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // counting sort
            randomAr(&ar[0], min_size);
            int* counter = new int[999];
            sortTime(_putZerosToAr, &counter[0], 999, countingSort, &ar[0], min_size, &counter[0], 999, false);
            delete [] counter;
        // quick sort
            randomAr(&ar[0], min_size);
            sortTime(quickSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // merge sort
            randomAr(&ar[0], min_size);
            int* sAr = new int[min_size];
            sortTime(mergeSort, &ar[0], min_size, merge, &ar[0], min_size, &counter[0], min_size/2, true);
            delete [] sAr;
        // -----------------------------
            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    // -----------------------------
    { /* test_2 (step: 250, size: 500 - 1000) */
        int i = 0;
        int step = 250;
        int max_size = 1000;
        int min_size = 500;
        int delta_size = max_size / min_size;
        while(i < delta_size) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
        // --------------------------------
        // bubble sort
            randomAr(&ar[0], min_size);
            sortTime(bubbleSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // insertion sort
            randomAr(&ar[0], min_size);
            sortTime(insertionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // selection sort
            randomAr(&ar[0], min_size);
            sortTime(selectionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // counting sort
            randomAr(&ar[0], min_size);
            int* counter = new int[999];
            sortTime(_putZerosToAr, &counter[0], 999, countingSort, &ar[0], min_size, &counter[0], 999, false);
            delete [] counter;
        // quick sort
            randomAr(&ar[0], min_size);
            sortTime(quickSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // merge sort
            randomAr(&ar[0], min_size);
            int* sAr = new int[min_size];
            sortTime(mergeSort, &ar[0], min_size, merge, &ar[0], min_size, &counter[0], min_size/2, true);
            delete [] sAr;
        // -----------------------------
            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    // ---------------------------
    { /* test_3 (step: 1000, size: 1000 - 10000) */
        int i = 0;
        int step = 1000;
        int max_size = 10000;
        int min_size = 1000;
        int delta_size = max_size / min_size;
        while(i < delta_size) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
        // ---------------------------------
        // bubble sort
            randomAr(&ar[0], min_size);
            sortTime(bubbleSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // insertion sort
            randomAr(&ar[0], min_size);
            sortTime(insertionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // selection sort
            randomAr(&ar[0], min_size);
            sortTime(selectionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // counting sort
            randomAr(&ar[0], min_size);
            int* counter = new int[999];
            sortTime(_putZerosToAr, &counter[0], 999, countingSort, &ar[0], min_size, &counter[0], 999, false);
            delete [] counter;
        // quick sort
            randomAr(&ar[0], min_size);
            sortTime(quickSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // merge sort
            randomAr(&ar[0], min_size);
            int* sAr = new int[min_size];
            sortTime(mergeSort, &ar[0], min_size, merge, &ar[0], min_size, &counter[0], min_size/2, true);
            delete [] sAr;
        // ----------------------------
            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    { /* test_4 (step: 5000, size: 10000 - 100000) */
        int i = 0;
        int step = 5000;
        int min_size = 10000;
        while(i < 20) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
        // ---------------------------------
        // bubble sort
            randomAr(&ar[0], min_size);
            sortTime(bubbleSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // insertion sort
            randomAr(&ar[0], min_size);
            sortTime(insertionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // selection sort
            randomAr(&ar[0], min_size);
            sortTime(selectionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // counting sort
            randomAr(&ar[0], min_size);
            int* counter = new int[999];
            sortTime(_putZerosToAr, &counter[0], 999, countingSort, &ar[0], min_size, &counter[0], 999, false);
            delete [] counter;
        // quick sort
            randomAr(&ar[0], min_size);
            sortTime(quickSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // merge sort
            randomAr(&ar[0], min_size);
            int* sAr = new int[min_size];
            sortTime(mergeSort, &ar[0], min_size, merge, &ar[0], min_size, &counter[0], min_size/2, true);
            delete [] sAr;
        // -----------------------------
            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    // -------------------
    { /* test_5 (step: 10000, size: 100000 - 200000) */
        int i = 0;
        int step = 10000;
        int min_size = 100000;
        while(i < 10) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
        // ----------------------------------
        // bubble sort
            randomAr(&ar[0], min_size);
            sortTime(bubbleSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // insertion sort
            randomAr(&ar[0], min_size);
            sortTime(insertionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // selection sort
            randomAr(&ar[0], min_size);
            sortTime(selectionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // counting sort
            randomAr(&ar[0], min_size);
            int* counter = new int[999];
            sortTime(_putZerosToAr, &counter[0], 999, countingSort, &ar[0], min_size, &counter[0], 999, false);
            delete [] counter;
        // quick sort
            randomAr(&ar[0], min_size);
            sortTime(quickSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // merge sort
            randomAr(&ar[0], min_size);
            int* sAr = new int[min_size];
            sortTime(mergeSort, &ar[0], min_size, merge, &ar[0], min_size, &counter[0], min_size/2, true);
            delete [] sAr;
        // -----------------------------------
            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    // ---------------------
    { /* test_6 (step: 100000, size: 200000 - 1000000) */
        int i = 0;
        int step = 100000;
        int min_size = 200000;
        while(i < 9) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
        // ---------------------------------
        // bubble sort
                randomAr(&ar[0], min_size);
                sortTime(bubbleSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // insertion sort
                randomAr(&ar[0], min_size);
                sortTime(insertionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // selection sort
                randomAr(&ar[0], min_size);
                sortTime(selectionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // counting sort
                randomAr(&ar[0], min_size);
                int* counter = new int[999];
                sortTime(_putZerosToAr, &counter[0], 999, countingSort, &ar[0], min_size, &counter[0], 999, false);
                delete [] counter;
        // quick sort
                randomAr(&ar[0], min_size);
                sortTime(quickSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // merge sort
                randomAr(&ar[0], min_size);
                int* sAr = new int[min_size];
                sortTime(mergeSort, &ar[0], min_size, merge, &ar[0], min_size, &counter[0], min_size/2, true);
                delete [] sAr;
        // --------------------------------
            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    // -----------------------------
    { /* test_7 (step: 1'000'000, size: 1'000'000 - 10'000'000) */
        int i = 0;
        int step = 1000000;
        int max_size = 10000000;
        int min_size = 1000000;
        int delta_size = max_size / min_size;
        while(i < delta_size) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
        // ------------------------------
        // bubble sort
            randomAr(&ar[0], min_size);
            sortTime(bubbleSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // insertion sort
            randomAr(&ar[0], min_size);
            sortTime(insertionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // selection sort
            randomAr(&ar[0], min_size);
            sortTime(selectionSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // counting sort
            randomAr(&ar[0], min_size);
            int* counter = new int[999];
            sortTime(_putZerosToAr, &counter[0], 999, countingSort, &ar[0], min_size, &counter[0], 999, false);
            delete [] counter;
        // quick sort
            randomAr(&ar[0], min_size);
            sortTime(quickSort, &ar[0], min_size, emptyFoo, &ar[0], min_size, &ar[0], min_size, false);
        // merge sort
            randomAr(&ar[0], min_size);
            int* sAr = new int[min_size];
            sortTime(mergeSort, &ar[0], min_size, merge, &ar[0], min_size, &counter[0], min_size/2, true);
            delete [] sAr;
            // ----------------------------
            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
}
