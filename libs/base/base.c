
#include "base.h"

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int getMinIndex(const int *arr, size_t n) {
    if (n == 0) {
        return -1;                             // Обработка случая пустого массива
    }

    int minElement = arr[0];
    int minIndex = 0;

    for (size_t i = 1; i < n; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            minIndex = i;
        }
    }

    return minIndex;
}
