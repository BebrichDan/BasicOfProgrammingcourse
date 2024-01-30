#include "C:/Users/bob/CLionProjects/cource/libs/algorithms/algorithm.h"
#include <errno.h>
#include <stdio.h>
#include <stdint.h>
#include "C:\Users\bob\CLionProjects\github\BasicOfProgrammingcourse\libs\data_structures\vector\vector.h"
#include "C:\Users\bob\CLionProjects\github\BasicOfProgrammingcourse\libs\data_structures\matrix\matrix.h"
#include "libs/base/base.h"



int main()
{


    matrix r = getMemMatrix(3, 3);
    inputMatrix(&r);

    position t = getMinValuePos(r);

    printf("%d %d", t.rowIndex, t.colIndex);


    free(r.values);

    return 0;
}


