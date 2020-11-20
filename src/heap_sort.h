//
// Created by yemingfeng on 2020/11/20.
//

#ifndef SORT_HEAP_SORT_H
#define SORT_HEAP_SORT_H

struct min_heap {
    int *data;
    int count;

    min_heap(int *data) {
        this->count = 0;
        this->data = new int[ARRAY_LENGTH + 1];
        for (int i = 1; i <= ARRAY_LENGTH; i++) {
            this->data[i] = data[i - 1];
            count++;
        }
        for (int i = count / 2; i >= 1; i--) {
            shift_down(i);
        }
    }

    void shift_up(int i) {
        while (i > 1 && data[i] < data[i / 2]) {
            std::swap(data[i], data[i / 2]);
            i = i / 2;
        }
    }

    void shift_down(int i) {
        while (2 * i <= count) {
            int next_i = i * 2;
            if (next_i + 1 <= count && data[next_i + 1] < data[next_i]) {
                next_i = next_i + 1;
            }

            if (data[next_i] > data[i]) {
                break;
            }

            std::swap(data[next_i], data[i]);
            i = next_i;
        }
    }

    int pop() {
        int top = data[1];
        std::swap(data[1], data[count]);
        count--;
        shift_down(1);
        return top;
    }
};

void heap_sort(int *array) {
    min_heap *heap = new min_heap(array);
    for (int i = 0; i < ARRAY_LENGTH; i++) {
        array[i] = heap->pop();
    }
}

#endif //SORT_HEAP_SORT_H
