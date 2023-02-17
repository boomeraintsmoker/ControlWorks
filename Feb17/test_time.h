#ifndef TEST_TIME_H
#define TEST_TIME_H
//            { // selection_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                selectionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - selection sort" << std::endl;
//            }
//            { // insertion_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                insertionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - insertion sort" << std::endl;
//            }
//            { // counting_sort
//                int* counter = new int[999];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                _putZerosToAr(&counter[0], 999);
//                countingSort(&ar[0], min_size, &counter[0], 999);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - counting sort" << std::endl;
//                delete [] counter;
//            }
           /* { // merge_sort
                int* sAr = new int[min_size];
                std::cout << min_size << '\t';
                std::chrono::time_point<std::chrono::high_resolution_clock> start;
                std::chrono::time_point<std::chrono::high_resolution_clock> end;
                start = std::chrono::high_resolution_clock::now();
                mergeSort(&ar[0], min_size);
                merge(&ar[0], min_size/2, &ar[min_size/2], min_size/2, &sAr[0]);
                end = std::chrono::high_resolution_clock::now();
                std::chrono::duration<double> diff = end - start;
                std::cout << diff.count() << '\t';
                std::cout << " - merge sort" << std::endl;
                delete [] sAr;
            } */
            delete [] ar;
            min_size = min_size + step;
            i++;
        }
    }
//    { /* test_2 (step: 250, size: 500 - 1000) */
//        int i = 0;
//        int step = 250;
//        int max_size = 1000; // 100 - 500
//        int min_size = 500;
//        int delta_size = max_size / min_size;
//        while(i < delta_size) {
//            int* ar = new int[min_size];
//            randomAr(&ar[0], min_size);
//            { // bubble_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                bubbleSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - bubble sort" << std::endl;
//            }
//            { // selection_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                selectionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - selection sort" << std::endl;
//            }
//            { // insertion_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                insertionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - insertion sort" << std::endl;
//            }
//            { // counting_sort
//                int* counter = new int[999];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                _putZerosToAr(&counter[0], 999);
//                countingSort(&ar[0], min_size, &counter[0], 999);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - counting sort" << std::endl;
//                delete [] counter;
//            }
//           /* { // merge_sort
//                int* sAr = new int[min_size];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                mergeSort(&ar[0], min_size);
//                merge(&ar[0], min_size/2, &ar[min_size/2], min_size/2, &sAr[0]);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - merge sort" << std::endl;
//                delete [] sAr;
//            } */
//            delete [] ar;
//            min_size = min_size + step;
//            i++;
//        }
//    }
//    { /* test_3 (step: 1000, size: 1000 - 10000) */
//        int i = 0;
//        int step = 1000;
//        int max_size = 10000; // 100 - 500
//        int min_size = 1000;
//        int delta_size = max_size / min_size;
//        while(i < delta_size) {
//            int* ar = new int[min_size];
//            randomAr(&ar[0], min_size);
//            { // bubble_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                bubbleSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - bubble sort" << std::endl;
//            }
//            { // selection_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                selectionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - selection sort" << std::endl;
//            }
//            { // insertion_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                insertionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - insertion sort" << std::endl;
//            }
//            { // counting_sort
//                int* counter = new int[999];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                _putZerosToAr(&counter[0], 999);
//                countingSort(&ar[0], min_size, &counter[0], 999);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - counting sort" << std::endl;
//                delete [] counter;
//            }
//           /* { // merge_sort
//                int* sAr = new int[min_size];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                mergeSort(&ar[0], min_size);
//                merge(&ar[0], min_size/2, &ar[min_size/2], min_size/2, &sAr[0]);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - merge sort" << std::endl;
//                delete [] sAr;
//            } */
//            delete [] ar;
//            min_size = min_size + step;
//            i++;
//        }
//    }
//    { /* test_4 (step: 5000, size: 10000 - 100000) */
//        int i = 0;
//        int step = 5000;
//        int max_size = 100000; // 10000 - 100000
//        int min_size = 10000;
//        int delta_size = max_size / min_size;
//        while(i < 20) {
//            int* ar = new int[min_size];
//            randomAr(&ar[0], min_size);
//            { // bubble_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                bubbleSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                if(diff.count() > 60.0) {
//                    continue;
//                }
//                std::cout << " - bubble sort" << std::endl;
//            }
//            { // selection_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                selectionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                if(diff.count() > 60.0) {
//                    continue;
//                }
//                std::cout << " - selection sort" << std::endl;
//            }
//            { // insertion_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                insertionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                if(diff.count() > 60.0) {
//                    continue;
//                }
//                std::cout << " - insertion sort" << std::endl;
//            }
//            { // counting_sort
//                int* counter = new int[999];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                _putZerosToAr(&counter[0], 999);
//                countingSort(&ar[0], min_size, &counter[0], 999);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - counting sort" << std::endl;
//                delete [] counter;
//            }
//           /* { // merge_sort
//                int* sAr = new int[min_size];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                mergeSort(&ar[0], min_size);
//                merge(&ar[0], min_size/2, &ar[min_size/2], min_size/2, &sAr[0]);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - merge sort" << std::endl;
//                delete [] sAr;
//            } */
//            delete [] ar;
//            min_size = min_size + step;
//            i++;
//        }
//    }
//    { /* test_4 (step: 10000, size: 100000 - 200000) */
//        int i = 0;
//        int step = 10000;
//        int max_size = 200000; // 100 - 500
//        int min_size = 100000;
//        int delta_size = max_size / min_size;
//        while(i < 10) {
//            int* ar = new int[min_size];
//            randomAr(&ar[0], min_size);
//            { // bubble_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                bubbleSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                if(diff.count() > 60.0) {
//                    continue;
//                }
//                std::cout << " - bubble sort" << std::endl;
//            }
//            { // selection_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                selectionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                if(diff.count() > 60.0) {
//                    continue;
//                }
//                std::cout << " - selection sort" << std::endl;
//            }
//            { // insertion_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                insertionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                if(diff.count() > 60.0) {
//                    continue;
//                }
//                std::cout << " - insertion sort" << std::endl;
//            }
//            { // counting_sort
//                int* counter = new int[999];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                _putZerosToAr(&counter[0], 999);
//                countingSort(&ar[0], min_size, &counter[0], 999);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - counting sort" << std::endl;
//                delete [] counter;
//            }
//           /* { // merge_sort
//                int* sAr = new int[min_size];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                mergeSort(&ar[0], min_size);
//                merge(&ar[0], min_size/2, &ar[min_size/2], min_size/2, &sAr[0]);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - merge sort" << std::endl;
//                delete [] sAr;
//            } */
//            delete [] ar;
//            min_size = min_size + step;
//            i++;
//        }
//    }
//    { /* test_5 (step: 100000, size: 200000 - 1000000) */
//        int i = 0;
//        int step = 100000;
//        int max_size = 1000000; // 100 - 500
//        int min_size = 200000;
//        int delta_size = max_size / min_size;
//        while(i < delta_size) {
//            int* ar = new int[min_size];
//            randomAr(&ar[0], min_size);
//            { // bubble_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                bubbleSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - bubble sort" << std::endl;
//            }
//            { // selection_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                selectionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - selection sort" << std::endl;
//            }
//            { // insertion_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                insertionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - insertion sort" << std::endl;
//            }
//            { // counting_sort
//                int* counter = new int[999];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                _putZerosToAr(&counter[0], 999);
//                countingSort(&ar[0], min_size, &counter[0], 999);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - counting sort" << std::endl;
//                delete [] counter;
//            }
//           /* { // merge_sort
//                int* sAr = new int[min_size];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                mergeSort(&ar[0], min_size);
//                merge(&ar[0], min_size/2, &ar[min_size/2], min_size/2, &sAr[0]);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - merge sort" << std::endl;
//                delete [] sAr;
//            } */
//            delete [] ar;
//            min_size = min_size + step;
//            i++;
//        }
//    }
//    { /* test_6 (step: 1000000, size: 1000000 - 10000000) */
//        int i = 0;
//        int step     = 1000000;
//        int max_size = 10000000; // 100 - 500
//        int min_size = 1000000;
//        int delta_size = max_size / min_size;
//        while(i < delta_size) {
//            int* ar = new int[min_size];
//            randomAr(&ar[0], min_size);
//            { // bubble_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                bubbleSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - bubble sort" << std::endl;
//            }
//            { // selection_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                selectionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - selection sort" << std::endl;
//            }
//            { // insertion_sort
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                insertionSort(&ar[0], min_size);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - insertion sort" << std::endl;
//            }
//            { // counting_sort
//                int* counter = new int[999];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                _putZerosToAr(&counter[0], 999);
//                countingSort(&ar[0], min_size, &counter[0], 999);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - counting sort" << std::endl;
//                delete [] counter;
//            }
//           /* { // merge_sort
//                int* sAr = new int[min_size];
//                std::cout << min_size << '\t';
//                std::chrono::time_point<std::chrono::high_resolution_clock> start;
//                std::chrono::time_point<std::chrono::high_resolution_clock> end;
//                start = std::chrono::high_resolution_clock::now();
//                mergeSort(&ar[0], min_size);
//                merge(&ar[0], min_size/2, &ar[min_size/2], min_size/2, &sAr[0]);
//                end = std::chrono::high_resolution_clock::now();
//                std::chrono::duration<double> diff = end - start;
//                std::cout << diff.count() << '\t';
//                std::cout << " - merge sort" << std::endl;
//                delete [] sAr;
//            } */
//            delete [] ar;
//            min_size = min_size + step;
//            i++;
//        }
//    }
#endif
