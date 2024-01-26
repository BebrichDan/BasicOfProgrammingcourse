#include "C:/Users/bob/CLionProjects/cource/libs/algorithms/algorithm.h"
#include <errno.h>
#include <stdio.h>
#include <stdint.h>
#include "C:\Users\bob\CLionProjects\github\BasicOfProgrammingcourse\libs\data_structures\vector\vector.h"


int main ()
{
    vector v = createVector(2);


    printf("%d", v.data[0]);

    free(v.data);
    return 0;
}