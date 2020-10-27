#include <iostream>
#include "array.h"
#include "selection_sort.h"
#include "bubble_sort.h"
#include "insert_sort.h"
#include "merge_sort.h"

int main() {
    int n = 1000;
    int *source = generate_random_array(n, 0, n);
    std::cout << "source array : ";
    display(source, n);

    int *bubble_sort_source = copy(source, n);
    test("bubble sort", bubble_sort, bubble_sort_source, n);

    int *selection_sort_source = copy(source, n);
    test("selection sort", selection_sort, selection_sort_source, n);

    int *insert_sort_source = copy(source, n);
    test("insert sort", insert_sort, insert_sort_source, n);

    int *merge_sort_source = copy(source, n);
    test("merge sort", merge_sort, merge_sort_source, n);

    return 0;
}
