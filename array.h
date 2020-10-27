//
// Created by yemingfeng on 2020/10/26.
//

#ifndef SORT_ARRAY_H
#define SORT_ARRAY_H

#include <iostream>
#include <assert.h>

void display(int *array, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int *copy(int *source, int n) {
    int *result = new int[n];
    for (int i = 0; i < n; i++) {
        result[i] = source[i];
    }
    return result;
}

// 返回 [a, b) 范围，长度为 n 的数组
int *generate_random_array(int n, int start, int end) {
    srand((unsigned) time(NULL));
    int *result = new int[n];
    for (int i = 0; i < n; i++)
        result[i] = (rand() % (end - start)) + start;
    return result;
}

bool check(int *array, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (array[i] > array[i + 1]) {
            return false;
        }
    }
    return true;
}

void test(std::string name, void sort(int *, int), int *array, int n) {
    clock_t start_time, end_time;
    start_time = clock();
    sort(array, n);
    end_time = clock();
    assert(check(array, n));
    std::cout << name << " : " << (double) (end_time - start_time) / CLOCKS_PER_SEC << "s" << std::endl;
}

#endif //SORT_ARRAY_H
