//
// Created by yemingfeng on 2020/10/26.
//

#ifndef SORT_ARRAY_H
#define SORT_ARRAY_H

#include <iostream>
#include <assert.h>

#define ARRAY_LENGTH 10000

void display(int *array) {
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int *copy(int *source) {
    int *result = new int[ARRAY_LENGTH];
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        result[i] = source[i];
    }
    return result;
}

// 返回 [a, b) 范围，长度为 n 的数组
int *generate_random_array(int start, int end) {
    unsigned int seed = time(NULL);
    std::cout << "seed is " << seed << std::endl;
    srand(seed);
    int *result = new int[ARRAY_LENGTH];
    for (int i = 0; i < ARRAY_LENGTH; i++)
        result[i] = (rand() % (end - start)) + start;
    return result;
}

bool check(int *array) {
    for (int i = 0; i < ARRAY_LENGTH - 1; i++) {
        if (array[i] > array[i + 1]) {
            return false;
        }
    }
    return true;
}

void test(std::string name, void sort(int *), int *array) {
    clock_t start_time, end_time;
    start_time = clock();
    sort(array);
    end_time = clock();
    assert(check(array));
    std::cout << name << " : " << (double) (end_time - start_time) / CLOCKS_PER_SEC << "s" << std::endl;
}

#endif //SORT_ARRAY_H
