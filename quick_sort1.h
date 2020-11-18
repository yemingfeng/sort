//
// Created by yemingfeng on 2020/11/18.
//

#ifndef SORT_QUICK_SORT1_H
#define SORT_QUICK_SORT1_H

// 对 [start, end] 排序
void quick_sort1(int *array, int start, int end) {
    if (start >= end) {
        return;
    }

    int j = start;
    for (int i = start + 1; i <= end; i++) {
        if (array[start] > array[i]) {
            j++;
            std::swap(array[i], array[j]);
        }
    }

    std::swap(array[start], array[j]);

    int p = j;
    quick_sort1(array, start, p - 1);
    quick_sort1(array, p + 1, end);
}

void quick_sort1(int *array) {
    quick_sort1(array, 0, ARRAY_LENGTH - 1);
}

#endif //SORT_QUICK_SORT1_H
