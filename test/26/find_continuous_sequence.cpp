/*************************************************************************
    > File Name: find_continuous_sequence.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月27日 星期六 20时56分45秒
 ************************************************************************/

#include <iostream>
#include "find_continuous_sequence.h"

//打印出结果
void print_continuous_sequence(int32_t small, int32_t big) {
    for (int32_t i = small; i <= big; ++i) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}

//求出和为num的所有序列
void find_continuous_sequence(int32_t num) {
    assert(num >= 3);

    int32_t small = 1;
    int32_t big = 2;
    int32_t middle = (num + 1) / 2;
    int32_t sum = small + big;

    while (small < middle) {
        if (sum == num) {
            print_continuous_sequence(small, big);
        }

        while (sum > num) {
            sum -= small;
            ++small;
            if (sum == num) {
                print_continuous_sequence(small, big);
            }
        }
        ++big;
        sum += big;
    }
}
