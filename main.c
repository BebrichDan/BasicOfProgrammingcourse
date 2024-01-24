#include "C:/Users/bob/CLionProjects/cource/libs/algorithms/algorithm.h"
#include <errno.h>

void test_unordered_array_set_union1() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){1, 2}, 2);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){2, 3}, 2);
    unordered_array_set resSet = unordered_array_set_union(set1, set2);
    unordered_array_set expectedSet = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    assert(unordered_array_set_isEqual(resSet, expectedSet));

    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(resSet);
    unordered_array_set_delete(expectedSet);
}

void test_unordered_array_set_union2() {
    unordered_array_set set1 = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    unordered_array_set set2 = unordered_array_set_create_from_array((int[]){}, 0);
    unordered_array_set resSet = unordered_array_set_union(set1, set2);
    unordered_array_set expectedSet = unordered_array_set_create_from_array((int[]){1, 2, 3}, 3);
    assert(unordered_array_set_isEqual(resSet, expectedSet));

    unordered_array_set_delete(set1);
    unordered_array_set_delete(set2);
    unordered_array_set_delete(resSet);
    unordered_array_set_delete(expectedSet);
}
void test_unordered_array_set_union () {
    test_unordered_array_set_union1 () ;
    test_unordered_array_set_union2 () ;
}
void test () {
    test_unordered_array_set_union () ;
}


int main ()
{


    test () ;

    return 0;
}