#include <iostream>
#include "array.h"
#include "selection_sort.h"
#include "bubble_sort.h"
#include "insert_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"

int main() {
    int *source = generate_random_array(0, 10);
    std::cout << "source array : ";
    display(source);

    int *bubble_sort_source = copy(source);
    test("bubble sort", bubble_sort, bubble_sort_source);

    int *selection_sort_source = copy(source);
    test("selection sort", selection_sort, selection_sort_source);

    int *insert_sort_source = copy(source);
    test("insert sort", insert_sort, insert_sort_source);

    int *merge_sort_source = copy(source);
    test("merge sort", merge_sort, merge_sort_source);

    int *quick_sort_source = copy(source);
    test("quick sort", quick_sort, quick_sort_source);

    return 0;
}
