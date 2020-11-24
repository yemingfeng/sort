//
// Created by yemingfeng on 2020/11/21.
//

#ifndef SORT_SHELL_SORT_H
#define SORT_SHELL_SORT_H

#include "array.h"

void shell_sort(int *array) {
    for (int gap = ARRAY_LENGTH / 2; gap > 0; gap = gap / 2) {
        for (int i = 0; i <= gap; i++) {
            for (int j = i + gap; j < ARRAY_LENGTH; j += gap) {
                int startJ = j;
                while (startJ >= gap && array[startJ] < array[startJ - gap]) {
                    std::swap(array[startJ], array[startJ - gap]);
                    startJ = startJ - gap;
                }
            }
        }
    }
}

#endif //SORT_SHELL_SORT_H
