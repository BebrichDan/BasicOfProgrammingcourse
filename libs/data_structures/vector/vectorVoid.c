#include <stdio.h>
#include <malloc.h>
#include "vectorVoid.h"

vectorVoid createVectorV(size_t n, size_t baseTypeSize)
{
    size_t *data = malloc(baseTypeSize * n);
    if (data == NULL)
    {
        fprintf(stderr, "bad alloc");
        exit(1);
    }
    return (vectorVoid) {data, 0, n, baseTypeSize};
}

void reserveV(vectorVoid *v, size_t newCapacity)
{
    if (newCapacity > v->size)
    {
        v->data = malloc(v->baseTypeSize * newCapacity);
        if (v->data == NULL)
        {
            fprintf(stderr, "bad alloc");
            exit(1);
        }
        v->capacity = newCapacity;
    } else if (newCapacity < v->size || newCapacity == v->size)  // why || not <= ?
    {
        v->data = malloc(v->baseTypeSize * newCapacity);
        v->size = newCapacity;
        v->capacity = newCapacity;
    } else if (newCapacity == 0)
    {
        v->data = malloc(sizeof(NULL));
        v->data = NULL;
        v->size = 0;
        v->capacity = 0;
    }
}

void shrinkToFitV(vectorVoid *v)
{
    reserveV(v, v->size);
}

void clearV(vectorVoid *v)
{
    v->size = 0;
}

void deleteVectorV(vectorVoid *v)
{
    if (v->data != NULL)
    {
        free(v->data);
        v->data = NULL;
    }
    v->size = 0;
    v->capacity = 0;
    v->baseTypeSize = 0;
}