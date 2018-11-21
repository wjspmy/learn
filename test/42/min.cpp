/*************************************************************************
    > File Name: min.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月20日 星期二 23时01分18秒
 ************************************************************************/

#include <iostream>
#include "min.h"

//寻找翻转数组中的最小值
void min_1(int32_t* a, int32_t len) {
    int32_t key = a[0];

    for (int32_t i = 0; i < len; ++i) {
        if (a[i] <= key) {
            std::cout << a[i] << std::endl;
            break;
        }
    }
    
    
}

//折半查找
void min_2(int32_t* a, int32_t len) {
    assert(a != NULL && len > 0);

    int32_t left = 0;
    int32_t right = len - 1;
    int32_t key = a[0];
    int32_t middle = 0;
    while (a[left] >= a[right]) {
        if (right - left == 1) {
            middle = right;
            break;
        }
        middle = (left + right) / 2;
        if (a[middle] >= a[left]) {
            left = middle;
        } else if (a[middle] < a[right]) {
            right = middle;
        }
    }
    std::cout << a[middle] << std::endl;

}
