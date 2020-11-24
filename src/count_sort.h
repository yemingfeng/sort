//
// Created by yemingfeng on 2020/11/24.
//

#ifndef SORT_COUNT_SORT_H
#define SORT_COUNT_SORT_H

#include "array.h"

void count_sort(int *array) {
    int max_value = find_max_value(array);
    int min_value = find_min_value(array);

    int counting_size = max_value - min_value + 1;
    int *counting = new int[counting_size]{0};

    for (int i = 0; i < ARRAY_LENGTH; i++) {
        counting[array[i] - min_value] += 1;
    }

    int k = 0;
    for (int i = 0; i < counting_size; i++) {
        int count = counting[i];
        while (count-- > 0) {
            array[k++] = i + min_value;
        }
    }
}

#endif //SORT_COUNT_SORT_H
