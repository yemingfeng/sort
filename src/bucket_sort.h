//
// Created by yemingfeng on 2020/11/24.
//

#ifndef SORT_BUCKET_SORT_H
#define SORT_BUCKET_SORT_H

#include <vector>
#include "array.h"
#include "quick_sort2.h"

void bucket_sort(int *array) {
    int bucket_size = 10;
    int min_value = find_min_value(array);
    int max_value = find_max_value(array);

    std::vector<std::vector<int>> buckets(bucket_size + 1, std::vector<int>(0));
    // 增加到对应的桶里面
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        int bucket_number = (int) ((1.0 * array[i] / (max_value - min_value)) * bucket_size);
        buckets[bucket_number].push_back(array[i]);
    }

    int *sorted = new int[ARRAY_LENGTH];
    int k = 0;
    for (auto &bucket : buckets) {
        std::sort(bucket.begin(), bucket.end());
        for (int i = 0; i < bucket.size(); i++) {
            sorted[k++] = bucket[i];
        }
    }

    for (k = 0; k < ARRAY_LENGTH; k++) {
        array[k] = sorted[k];
    }

    delete[] sorted;
}

#endif //SORT_BUCKET_SORT_H
