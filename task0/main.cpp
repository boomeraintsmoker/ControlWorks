#include "task0.h"

int main() {
    int size = 1000;
    int range = 200;
    int ar[size];
    randomAr(&ar[0], size, range);
    showAr(&ar[0], size, range);
    return 0;
}
