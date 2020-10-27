//
// Created by yemingfeng on 2020/10/26.
//

#ifndef SORT_SELECTION_SORT_H
#define SORT_SELECTION_SORT_H

#include <algorithm>
#include "array.h"

void selection_sort(int *array, int n) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (array[minIndex] > array[j]) {
                minIndex = j;
            }
        }
        std::swap(array[i], array[minIndex]);
    }
}

#endif //SORT_SELECTION_SORT_H
