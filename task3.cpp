#include <iostream>
#include "task3.h"
#include "often_used_functions.h"

void merge(int* lAr, int lArSize, int* rAr, int rArSize, int* sAr) {
    int i = 0;
    int j = 0;
    while(i < lArSize && j < rArSize) {
        if(lAr[i] < rAr[j]) {
            sAr[i + j] = lAr[i];
            i++;
        }
        if(rAr[j] < lAr[i]) {
            sAr[j + i] = rAr[j];
            j++;
        }
    }
    while(i < lArSize) {
        sAr[i + j] = lAr[i];
        i++;
    }
    while(j < rArSize) {
        sAr[j + i] = rAr[j];
        j++;
    }

}

void testMerge() {
    std::cout << std::endl;
    { /* test_1 */
    const int LARSIZE1 = 5;
    int lAr1[LARSIZE1] = {1, 4, 5, 6, 7};
    const int RARSIZE1 = 5;
    int rAr1[RARSIZE1] = {2, 3, 9, 11, 15};
    const int SARSIZE1 = LARSIZE1 + RARSIZE1;
    int sAr1[SARSIZE1];
    merge(&lAr1[0], LARSIZE1, &rAr1[0], RARSIZE1, &sAr1[0]);
    showArForTasks_2_3(&sAr1[0], SARSIZE1);
    }
}
