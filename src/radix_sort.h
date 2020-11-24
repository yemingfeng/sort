//
// Created by yemingfeng on 2020/11/24.
//

#ifndef SORT_RADIX_SORT_H
#define SORT_RADIX_SORT_H

#include "array.h"
#include <vector>

void radix_sort(int *array) {
    int max_value = find_max_value(array);
    int radix = 1;
    while (max_value / radix > 0) {
        std::vector<std::vector<int>> bucket(10, std::vector<int>());
        for (int i = 0; i < ARRAY_LENGTH; i++) {
            bucket[(array[i] / radix) % 10].push_back(array[i]);
        }

        int i = 0;
        for (auto it = bucket.begin(); it != bucket.end(); it++) {
            for (auto items = (it)->begin(); items != it->end(); items++) {
                array[i++] = *items;
            }
        }
        radix *= 10;
    }
}

#endif //SORT_RADIX_SORT_H
