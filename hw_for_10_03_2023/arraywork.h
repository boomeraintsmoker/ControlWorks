#ifndef ARRAYWORK_H
#define ARRAYWORK_H
void randomAr(int* ar, int size);
double sortTime(void(*sort)(int*, int), int* ar, int size);
double addSortTimeToFile(FILE* f, int i, double time);
#endif // ARRAYWORK_H
