/*************************************************************************
    > File Name: max_sum.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月26日 星期三 22时15分02秒
 ************************************************************************/

#include <iostream>
#include <stdint.h>

int32_t MaxSum(int32_t* array, int32_t size) {
    int32_t sum = 0;
    int32_t maxsum = 0;
    for (int32_t i = 0; i < size; ++i) {
        sum += array[i];
        if (sum < 0) {
            sum = 0;
        }
        if (sum > maxsum) {
            maxsum = sum;
        }
    }
    if (maxsum == 0) {
        for (int32_t i = 0; i < size; ++i) {
            if (maxsum < array[i]) {
                maxsum = array[i];
            }
        }
    }
    return maxsum;
}
