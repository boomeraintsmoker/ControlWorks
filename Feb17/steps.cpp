#include <iostream>
#include "steps.h"
#include "often_used_functions.h"
#include "sorts.h"
#include <chrono>

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
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
        // --------------------------------
        // bubble sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';
        // insertion sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';
        // selection sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';
        // counting sort
            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';
            delete [] counter;
        // quick sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << '\t';
        // merge sort
            int* sAr = new int[min_size];
            std::chrono::time_point<std::chrono::high_resolution_clock> start6;
            std::chrono::time_point<std::chrono::high_resolution_clock> end6;
            start6 = std::chrono::high_resolution_clock::now();
            //mergeSort(&ar[0], min_size);
            //merge(&ar[0], min_size/2, &ar[min_size/2], min_size/2, &sAr[0]);
            end6 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff6 = end6 - start6;
            std::cout << diff6.count() << std::endl;
            delete [] sAr;
        // -----------------------------
        // очень много повторяющегося кода, знаю, что надо уменьшать, но пока,
        // по непонятной для меня причине, функции "не согласуются", постараюсь
        // в ближайщее время как-то доработать этот момент
        // во всем этом коде две страшные проблемы - он нечитаем и занимает много памяти
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
        // bubble_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';
        // insertion_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';
        // selection_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';
        // counting_sort
            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';
            delete [] counter;
        // quick_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << '\t';
        // merge_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start6;
            std::chrono::time_point<std::chrono::high_resolution_clock> end6;
            start6 = std::chrono::high_resolution_clock::now();
            mergeSort(&ar[0], min_size);
            merge(&ar[0], min_size, min_size/2);
            end6 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff6 = end6 - start6;
            std::cout << diff6.count() << std::endl;
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
        // bubble_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';
        // insertion_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';
        // selection_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';
        // counting_sort
            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';
            delete [] counter;
        // quick_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << '\t';
        // merge_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start6;
            std::chrono::time_point<std::chrono::high_resolution_clock> end6;
            start6 = std::chrono::high_resolution_clock::now();
            mergeSort(&ar[0], min_size);
            merge(&ar[0], min_size, min_size/2);
            end6 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff6 = end6 - start6;
            std::cout << diff6.count() << std::endl;
        // ----------------------------
            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    { /* test_4 (step: 5000, size: 10000 - 100000) */
        int i = 0;
        int step = 5000;
        int max_size = 100000;
        int min_size = 10000;
        while(i < 20) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
        // ---------------------------------
        // bubble_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';
        // insertion_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';
        // selection_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';
        // counting_sort
            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';
            delete [] counter;
        // quick_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << '\t';
        // merge_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start6;
            std::chrono::time_point<std::chrono::high_resolution_clock> end6;
            start6 = std::chrono::high_resolution_clock::now();
            mergeSort(&ar[0], min_size);
            merge(&ar[0], min_size, min_size/2);
            end6 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff6 = end6 - start6;
            std::cout << diff6.count() << std::endl;
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
        int max_size = 200000;
        int min_size = 100000;
        while(i < 10) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
        // ----------------------------------
        // bubble_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
            std::cout << diff1.count() << '\t';
        // insertion_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';
        // selection_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            std::cout << diff3.count() << '\t';
        // counting_sort
            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';
            delete [] counter;
        // quick_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << '\t';
        // merge_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start6;
            std::chrono::time_point<std::chrono::high_resolution_clock> end6;
            start6 = std::chrono::high_resolution_clock::now();
            mergeSort(&ar[0], min_size);
            merge(&ar[0], min_size, min_size/2);
            end6 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff6 = end6 - start6;
            std::cout << diff6.count() << std::endl;
        // -----------------------------------
            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
    // ---------------------
    int sort_remover1 = 0;
    int sort_remover2 = 0;
    { /* test_6 (step: 100000, size: 200000 - 1000000) */
        int i = 0;
        int step = 100000;
        int min_size = 200000;
        while(i < 9) {
            int* ar = new int[min_size];
            randomAr(&ar[0], min_size);
            std::cout << min_size << '\t';
        // ---------------------------------
        // bubble_sort и проверка её времени
            std::chrono::time_point<std::chrono::high_resolution_clock> start1;
            std::chrono::time_point<std::chrono::high_resolution_clock> end1;
            start1 = std::chrono::high_resolution_clock::now();
            bubbleSort(&ar[0], min_size);
            end1 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff1 = end1 - start1;
        // --------------------------
        // условие: если время выполнения > 60сек, то sort_remover = -1,
        // если же sort_remover = -1, то выполняем все, кроме выбранной сортировки
        // да - соглашусь - полный бред и можно куда проще, но пока в голову не приходит идея
            if(diff1.count() > 60.0) {
                sort_remover1 = -1;
            }
            if(sort_remover1 == -1) {
                std::chrono::time_point<std::chrono::high_resolution_clock> start2;
                std::chrono::time_point<std::chrono::high_resolution_clock> end2;
                start2 = std::chrono::high_resolution_clock::now();
                insertionSort(&ar[0], min_size);
                end2 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff2 = end2 - start2;
                std::cout << diff2.count() << '\t';
            }
            if(sort_remover1 == 0) {
                std::cout << diff1.count() << '\t';
                std::chrono::time_point<std::chrono::high_resolution_clock> start2;
                std::chrono::time_point<std::chrono::high_resolution_clock> end2;
                start2 = std::chrono::high_resolution_clock::now();
                insertionSort(&ar[0], min_size);
                end2 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff2 = end2 - start2;
                std::cout << diff2.count() << '\t';
            }
        // selection_sort и снова проверка
        // решил проверять на время только две самые долгие сортировки
            std::chrono::time_point<std::chrono::high_resolution_clock> start3;
            std::chrono::time_point<std::chrono::high_resolution_clock> end3;
            start3 = std::chrono::high_resolution_clock::now();
            selectionSort(&ar[0], min_size);
            end3 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff3 = end3 - start3;
            if(diff3.count() > 60.0) {
                sort_remover2 = -1;
            }
            if(sort_remover2 == -1) {
                int* counter = new int[999];
                std::chrono::time_point<std::chrono::high_resolution_clock> start4;
                std::chrono::time_point<std::chrono::high_resolution_clock> end4;
                start4 = std::chrono::high_resolution_clock::now();
                _putZerosToAr(&counter[0], 999);
                countingSort(&ar[0], min_size, &counter[0], 999);
                end4 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff4 = end4 - start4;
                std::cout << diff4.count() << '\t';
                delete [] counter;
        // -----------------------------------
                std::chrono::time_point<std::chrono::high_resolution_clock> start5;
                std::chrono::time_point<std::chrono::high_resolution_clock> end5;
                start5 = std::chrono::high_resolution_clock::now();
                quickSort(&ar[0], min_size);
                end5 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff5 = end5 - start5;
                std::cout << diff5.count() << '\t';
        // -----------------------------------
                std::chrono::time_point<std::chrono::high_resolution_clock> start6;
                std::chrono::time_point<std::chrono::high_resolution_clock> end6;
                start6 = std::chrono::high_resolution_clock::now();
                mergeSort(&ar[0], min_size);
                merge(&ar[0], min_size, min_size/2);
                end6 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff6 = end6 - start6;
                std::cout << diff6.count() << std::endl;
            }
            if(sort_remover2 == 0) {
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
                delete [] counter;
        // --------------------------------
                std::chrono::time_point<std::chrono::high_resolution_clock> start5;
                std::chrono::time_point<std::chrono::high_resolution_clock> end5;
                start5 = std::chrono::high_resolution_clock::now();
                quickSort(&ar[0], min_size);
                end5 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff5 = end5 - start5;
                std::cout << diff5.count() << '\t';
        // ----------------------------------
                std::chrono::time_point<std::chrono::high_resolution_clock> start6;
                std::chrono::time_point<std::chrono::high_resolution_clock> end6;
                start6 = std::chrono::high_resolution_clock::now();
                mergeSort(&ar[0], min_size);
                merge(&ar[0], min_size, min_size/2);
                end6 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff6 = end6 - start6;
                std::cout << diff6.count() << std::endl;
            }
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
        // --------------------------
        // проверка времени bubble_sort
            if(sort_remover1 == -1) {
                return;
            }
            if(sort_remover1 == 0) {
                std::chrono::time_point<std::chrono::high_resolution_clock> start1;
                std::chrono::time_point<std::chrono::high_resolution_clock> end1;
                start1 = std::chrono::high_resolution_clock::now();
                bubbleSort(&ar[0], min_size);
                end1 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff1 = end1 - start1;
                std::cout << diff1.count() << '\t';
            }
        // -------------------------
        // insertion_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start2;
            std::chrono::time_point<std::chrono::high_resolution_clock> end2;
            start2 = std::chrono::high_resolution_clock::now();
            insertionSort(&ar[0], min_size);
            end2 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff2 = end2 - start2;
            std::cout << diff2.count() << '\t';
        // --------------------------
        // проверка времени selection_sort
            if(sort_remover2 == -1) {
                return;
            }
            if(sort_remover2 == 0) {
                std::chrono::time_point<std::chrono::high_resolution_clock> start3;
                std::chrono::time_point<std::chrono::high_resolution_clock> end3;
                start3 = std::chrono::high_resolution_clock::now();
                selectionSort(&ar[0], min_size);
                end3 = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff3 = end3 - start3;
                std::cout << diff3.count() << '\t';
            }
        // counting sort
            int* counter = new int[999];
            std::chrono::time_point<std::chrono::high_resolution_clock> start4;
            std::chrono::time_point<std::chrono::high_resolution_clock> end4;
            start4 = std::chrono::high_resolution_clock::now();
            _putZerosToAr(&counter[0], 999);
            countingSort(&ar[0], min_size, &counter[0], 999);
            end4 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff4 = end4 - start4;
            std::cout << diff4.count() << '\t';
            delete [] counter;
        // quick sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start5;
            std::chrono::time_point<std::chrono::high_resolution_clock> end5;
            start5 = std::chrono::high_resolution_clock::now();
            quickSort(&ar[0], min_size);
            end5 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff5 = end5 - start5;
            std::cout << diff5.count() << '\t';
        // merge_sort
            std::chrono::time_point<std::chrono::high_resolution_clock> start6;
            std::chrono::time_point<std::chrono::high_resolution_clock> end6;
            start6 = std::chrono::high_resolution_clock::now();
            mergeSort(&ar[0], min_size);
            merge(&ar[0], min_size, min_size/2);
            end6 = std::chrono::high_resolution_clock::now();
            std::chrono::duration<double> diff6 = end6 - start6;
            std::cout << diff6.count() << std::endl;
        // ----------------------------
            min_size = min_size + step;
            i++;
            delete [] ar;
        }
    }
}
