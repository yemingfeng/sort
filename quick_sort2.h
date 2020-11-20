//
// Created by yemingfeng on 2020/11/18.
//

#ifndef SORT_QUICK_SORT2_H
#define SORT_QUICK_SORT2_H

#include "array.h"

// 对 [start, end] 排序
void quick_sort2(int *array, int start, int end) {
    if (start >= end) {
        return;
    }

    int i = start + 1;
    int j = end;

    while (true) {
        while (array[i] < array[start] && i <= j) {
            i++;
        }
        while (array[j] > array[start] && j >= i) {
            j--;
        }
        if (i >= j) {
            break;
        }
        std::swap(array[i], array[j]);
        i++;
        j--;
    }

    std::swap(array[j], array[start]);

    int p = j;
    quick_sort2(array, start, p - 1);
    quick_sort2(array, p + 1, end);
}

void quick_sort2(int *array) {
    quick_sort2(array, 0, ARRAY_LENGTH - 1);
}

#endif //SORT_QUICK_SORT2_H
