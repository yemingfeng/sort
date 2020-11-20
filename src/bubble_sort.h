//
// Created by yemingfeng on 2020/10/27.
//

#ifndef SORT_BUBBLE_SORT_H
#define SORT_BUBBLE_SORT_H

#include <iostream>

void bubble_sort(int *array) {
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        for (int j = ARRAY_LENGTH - 1; j > i; j--) {
            if (array[j] < array[j - 1]) {
                std::swap(array[j], array[j - 1]);
            }
        }
    }
}

#endif //SORT_BUBBLE_SORT_H
