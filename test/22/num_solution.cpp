/*************************************************************************
    > File Name: num_solution.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月25日 星期四 23时05分44秒
 ************************************************************************/

#include <iostream>
#include "num_solution.h"

int32_t solution(int32_t num) {
    int32_t count = 0;

    while(num) {
        if (num && 1) {
            ++count;
        }
        num = num >> 1;
    }
    return count;
}
