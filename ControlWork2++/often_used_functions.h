#ifndef OFTEN_USED_FUNCTIONS_H
#define OFTEN_USED_FUNCTIONS_H
void randomAr(int* ar, int size);
void showAr(int* ar, int size);
void sortTime(void(*sort)(int*, int), int* ar, int size, void(*sort1)(int*, int, int*, int), int* ar1, int size1, int* counter, int max_or_center, bool isLast);
bool isMoreTheSixty();
#endif // OFTEN_USED_FUNCTIONS_H
