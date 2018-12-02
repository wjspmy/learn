/*************************************************************************
    > File Name: sum.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月02日 星期日 14时08分07秒
 ************************************************************************/

#include <iostream>
#include "sum.h"

int32_t sum(int32_t a, int32_t b) {
   
    if (b == 0) {
        return a;
    }

    int32_t s = a ^ b;

    int32_t key = (a & b) << 1;
    return sum(s, key, count);

}
