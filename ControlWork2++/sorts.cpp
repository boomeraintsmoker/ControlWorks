#include <iostream>
#include <cstring>
#include "sorts.h"

void bubbleSort(int* ar, int size) {
    for(int i = 0; i < size - 1; i++) {
        int currentIndex = i;
        for(int j = i + 1; j < size; j++) {
            int temp;
            int nextIndex = j;
            while(ar[currentIndex] > ar[nextIndex]) {
                temp = ar[currentIndex];
                ar[currentIndex] = ar[nextIndex];
                ar[nextIndex] = temp;
                if(ar[currentIndex] < ar[nextIndex]) continue;
            }
        }
    }
}

void selectionSort(int* ar, int size) {
    for(int i = 0; i < size; i++) {
        int minIndex = i;
        for(int j = i; j < size; j++) {
            if(ar[minIndex] > ar[j]) {
                minIndex = j;
            }
        }
        int temp;
        if(ar[minIndex] != ar[i]) {
            temp = ar[minIndex];
            ar[minIndex] = ar[i];
            ar[i] = temp;
        }
    }
}

void insertionSort(int* ar, int size) {
    for(int i = 1; i < size; i++) {
        int currentElement = ar[i];
        int j = i - 1;
        while(j >= 0 && ar[j] > currentElement) {
            ar[j + 1] = ar[j];
            ar[j] = currentElement;
            j--;
        }
    }
}

void _putZerosToAr(int* counter, int maxElement) {
    for(int i = 0; i < maxElement; i++) {
       counter[i] = 0;
    }
}

void countingSort(int* ar, int size, int* counter, int maxElement) {
    for(int i = 0; i < size; i++) {
        counter[ar[i]]++;
    }
    int pos = 0;
    for(int i = 0; i < maxElement; i++) {
        for(int j = 0; j < counter[i]; j++) {
            ar[pos++] = i;
        }
    }
}

void merge(int* ar, int size, int* unnecess, int central) {
    int left = 0;
    int right = central;
    int* arTemp = new int [size];
    int indexTemp = 0;

    while (left < central && right < size) {
        while(ar[left] <= ar[right] && left < central) {
            arTemp[indexTemp++] = ar[left++];
        }
        while(ar[left] > ar[right] && right < size) {
            arTemp[indexTemp] = ar[right];
            indexTemp++;
            right++;
        }
    }

    while (left < central) {
        arTemp[indexTemp++] = ar[left++];
    }
    while (right < size) {
        arTemp[indexTemp++] = ar[right++];
    }

    memcpy(ar, arTemp, size * sizeof(int));

    delete [] arTemp;
}

void mergeSort(int* ar, int size) {
    if (size <= 1) {
        return;
    }
    mergeSort(&ar[0], size >> 1);
    mergeSort(&ar[size >> 1], size - (size >> 1));

    merge(ar, size, ar, size >> 1);
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void quickSort(int* ar, int size) {
    int left = 0;
    int right = size - 1;
    int pivot = ar[size >> 1];

    while(left <= right) {
        while(ar[left] < pivot) {
            left++;
        }

        while (ar[right] > pivot) {
            right--;
        }

        if (left <= right) {
            swap(ar[right], ar[left]);
            right--;
            left++;
        }
    }
    if (right > 0) {
        quickSort(&ar[0], right + 1);
    }

    if (left < size) {
        quickSort(&ar[left], size - left);
    }
}

void emptyFoo(int* ar, int size, int* counter, int max) {

}
