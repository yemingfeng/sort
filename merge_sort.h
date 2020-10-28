//
// Created by yemingfeng on 2020/10/27.
//

#ifndef SORT_MERGE_SORT_H
#define SORT_MERGE_SORT_H

#include "array.h"

// 对 [start, end] 排序
void merge_sort(int *array, int start, int end) {
    if (start >= end) {
        return;
    }

    int middle = (end - start) / 2 + start;
    merge_sort(array, start, middle);
    merge_sort(array, middle + 1, end);

    // 归并，将 [start, middle] 和 [middle + 1, end] 合并
    int *aux = new int[end - start + 1];
    int i = start;
    int j = middle + 1;
    int k = 0;
    while (true) {
        if (i >= middle + 1 && j >= end + 1) {
            break;
        }

        // 说明 [start, middle] 已经用完，直接将 [middle + 1, end] 合并
        if (i == middle + 1) {
            aux[k++] = array[j++];
        }
            // 说明 [middle + 1, end] 已经用完，直接将 [start, middle] 合并
        else if (j == end + 1) {
            aux[k++] = array[i++];
        } else if (array[i] < array[j]) {
            aux[k++] = array[i++];
        } else if (array[i] >= array[j]) {
            aux[k++] = array[j++];
        } else {
            i++;
            j++;
        }
    }

    for (int position = start; position <= end; position++) {
        array[position] = aux[position - start];
    }
}

void merge_sort(int *array) {
    merge_sort(array, 0, ARRAY_LENGTH - 1);
}

#endif //SORT_MERGE_SORT_H
