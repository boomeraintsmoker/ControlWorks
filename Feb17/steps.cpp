#include <iostream>
#include "steps.h"
#include "often_used_functions.h"
#include "sorts.h"
#include <chrono>

void test_bubble() {
    { /* test_1 (step: 100, size: 100 - 500) */
        int i = 0;
        int step = 100;
        int max_size = 500; // 100 - 500
        int min_size = 100;
        int delta_size = max_size / min_size;
        std::cout << '\t' << "Bubble sort" << '\t' << "Insertion sort" << '\t' << "Selection sort" << '\t' << "Counting sort" << '\t' << "Quick sort" << std::endl;
        while(i < delta_size) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';

            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << std::endl;

            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    { /* test_2 (step: 100, size: 100 - 500) */
        int i = 0;
        int step = 250;
        int max_size = 1000; // 100 - 500
        int min_size = 500;
        int delta_size = max_size / min_size;
        while(i < delta_size) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';

            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << std::endl;

            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    { /* test_3 (step: 100, size: 100 - 500) */
        int i = 0;
        int step = 1000;
        int max_size = 10000; // 100 - 500
        int min_size = 1000;
        int delta_size = max_size / min_size;
        while(i < delta_size) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';

            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << std::endl;

            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    { /* test_4 (step: 100, size: 100 - 500) */
        int i = 0;
        int step = 10000;
        int max_size = 200000; // 100 - 500
        int min_size = 100000;
        int delta_size = max_size / min_size;
        while(i < delta_size) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';

            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';

            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << std::endl;

            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
}
