#include <stdio.h>
#include <malloc.h>
#include "vector.h"

vector createVector(size_t n)
{
    int *data = malloc(sizeof(int)*n);
    if(data == NULL)
    {
        fprintf(stderr, "bad alloc");
        exit(1);
    }
    return (vector){data, 0, n};
}

void reserve(vector *v, size_t newCapacity)
{
    if (newCapacity > v->size)
    {
        v->data = malloc(sizeof(int)*newCapacity);
        if(v->data == NULL)
        {
            fprintf(stderr, "bad alloc");
            exit(1);
        }
        v->capacity = newCapacity;
    }
    else if (newCapacity < v->size)
    {
        v->data = malloc(sizeof(int)*newCapacity);
        v->size = newCapacity;
        v->capacity = newCapacity;
    }
    else if (newCapacity == 0)
    {
        v->data = malloc(sizeof(NULL));
        v->data =  NULL;
        v->size = 0;
        v->capacity = 0;
    }
}
void clear(vector *v)                           //верно ли?
{
    v->size = 0;
}
void shrinkToFit(vector *v)
{
    reserve(v, v->size);
}
void deleteVector(vector *v)
{
    if (v->data != NULL)
    {
        free(v->data);
        v->data = NULL;
    }
    v->size = 0;
    v->capacity = 0;
}