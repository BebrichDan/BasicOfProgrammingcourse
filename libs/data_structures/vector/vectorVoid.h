#ifndef INC_VECTORVOID_H
#define INC_VECTORVOID_H

#include <limits.h>

typedef struct vectorVoid {
    void *data;          // указатель на нулевой элемент вектора
    size_t size;         // размер вектора вместимость вектора
    size_t capacity;     // размер базового например, если вектор хранит int -
    size_t baseTypeSize; // то поле baseTypeSize = sizeof(int)
                         // если вектор хранит float -
                         // то поле baseTypeSize = sizeof(float)
} vectorVoid;

#endif