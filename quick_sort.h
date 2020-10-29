//
// Created by yemingfeng on 2020/10/28.
//

#ifndef SORT_QUICK_SORT_H
#define SORT_QUICK_SORT_H

#include <algorithm>
#include "array.h"

// 对 [start, end] 排序
void quick_sort(int *array, int start, int end) {
    if (start >= end) {
        return;
    }

    // 求一个 p，将 array 分成两部分
    // array[start + 1, p] < array[start]
    // array[p + 1, end] >= array[start]
    int key = array[start];
    int j = start;
    for (int i = start + 1; i <= end; i++) {
        if (array[i] < key) {
            j++;
            std::swap(array[i], array[j]);
        }
    }
    std::swap(array[start], array[j]);

    int p = j;

    quick_sort(array, start, p - 1);
    quick_sort(array, p + 1, end);
}

void quick_sort(int *array) {
    quick_sort(array, 0, ARRAY_LENGTH - 1);
}

#endif //SORT_QUICK_SORT_H
