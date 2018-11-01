/*************************************************************************
    > File Name: reorder_odd_even.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月31日 星期三 23时58分03秒
 ************************************************************************/

#include <iostream>
#include "reorder_odd_even.h"


//调整数组顺序使奇数位于偶数前面,时间复杂度为O(n);
//
//额外建立两个数组来分别保存奇数和偶数
void reordea_1(int32_t* a, int32_t n) {
    int32_t b[n] = {0};//偶数
    int32_t c[n] = {0};//奇数
    int32_t b_count = 0;//偶数长度
    int32_t c_count = 0;//奇数长度

    for (int32_t i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {//偶数
            b[b_count++] = a[i];
        } else {//奇数
            c[c_count++] = a[i];
        }
    }

    for (int32_t i = 0; i < c_count; ++i) {
        a[i] = c[i];
    }
    for (int32_t i = 0, j = c_count; i < b_count; ++i, ++j) {
        a[j] = b[i];
    }
}


//直接交换数组中的奇数和偶数
void reorder_2(int32_t* a, int32_t n) {
    int32_t start = 0;
    int32_t end = n - 1;

    while (start < end) {
        if (a[start] % 2 == 0 && a[end] % 2 == 1) {
            std::swap(a[start], a[end]);
        }
        if (a[start] % 2 == 1) {
            ++start;
        }
        if (a[end] % 2 == 0) {
            --end;
        }
    }
}
