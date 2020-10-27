//
// Created by yemingfeng on 2020/10/27.
//

#ifndef SORT_INSERT_SORT_H
#define SORT_INSERT_SORT_H

#include <algorithm>

void insert_sort(int *array, int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        int key = array[j];
        // 向前查找到比 key 小的位置
        for (; j >= 0; j--) {
            if (array[j] > key) {
                std::swap(array[j], array[j + 1]);
            }
        }
        array[j] = key;
    }
}

#endif //SORT_INSERT_SORT_H
