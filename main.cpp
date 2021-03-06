#include <iostream>
#include "src/array.h"
#include "src/selection_sort.h"
#include "src/bubble_sort.h"
#include "src/insert_sort.h"
#include "src/merge_sort.h"
#include "src/quick_sort1.h"
#include "src/quick_sort2.h"
#include "src/heap_sort.h"
#include "src/shell_sort.h"
#include "src/radix_sort.h"
#include "src/bucket_sort.h"
#include "src/count_sort.h"

int main() {
    int *source = generate_random_array(0, 1000);
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

    int *quick_sort1_source = copy(source);
    test("quick sort1", quick_sort1, quick_sort1_source);

    int *quick_sort2_source = copy(source);
    test("quick sort2", quick_sort2, quick_sort2_source);

    int *heap_sort_source = copy(source);
    test("heap sort", heap_sort, heap_sort_source);

    int *shell_sort_source = copy(source);
    test("shell sort", shell_sort, shell_sort_source);

    int *radix_sort_source = copy(source);
    test("radix sort", radix_sort, radix_sort_source);

    int *bucket_sort_source = copy(source);
    test("bucket sort", bucket_sort, bucket_sort_source);

    int *count_sort_source = copy(source);
    test("count sort", count_sort, count_sort_source);

    return 0;
}
