/*************************************************************************
    > File Name: more_number.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月24日 星期六 19时30分20秒
 ************************************************************************/

#include <iostream>
#include "more_number.h"

int32_t solution(int32_t* a, int32_t len) {

    std::sort(a, a + len);

    int32_t count = 1;
    int32_t max = 0;
    int32_t position = 0;

    for (int32_t i = 1; i < len; ++i) {
        if (a[i] == a[i - 1]) {
            ++count;
            if (count > max) {
                max = count;
                position = i;
            } else {
                count = 1;
            }
        }
    }
    if (max >= len / 2) {
        return a[position];
    } else {
        std::cout << "ERROR!\n";
        return -1;
    }


}
