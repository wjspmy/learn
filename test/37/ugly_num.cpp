/*************************************************************************
    > File Name: ugly_num.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月15日 星期四 17时32分25秒
 ************************************************************************/

#include <iostream>
#include "ugly_num.h"

bool ugly(int32_t num) {
    while (num % 2 == 0) {
        num /= 2;
    }
    while (num % 3 == 0) {
        num /= 3;
    }
    while (num % 5 == 0) {
        num /= 5;
    }
    return (num == 1) ? true : false;
}

//找从1开始的第N个的丑数
int32_t solution(int32_t index) {
    if (index <= 0) {
        return 0;
    }
    int32_t num = 0;
    int32_t found = 0;

    while (found < index) {
        ++num;
        if (ugly(num)) {
            ++found;
        }
    }
    return num;
}
