//
// Created by yemingfeng on 2020/10/27.
//

#ifndef SORT_BUBBLE_SORT_H
#define SORT_BUBBLE_SORT_H

#include <iostream>

void bubble_sort(int *array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (array[j] < array[j - 1]) {
                std::swap(array[j], array[j - 1]);
            }
        }
    }
}

#endif //SORT_BUBBLE_SORT_H
