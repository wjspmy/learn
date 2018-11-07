/*************************************************************************
    > File Name: print_random.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月07日 星期三 23时14分34秒
 ************************************************************************/

#include <iostream>
#include "print_random.h"

void print_random() {
    int32_t a[101];
    for (int32_t i = 0; i < 101; ++i) {
        a[i] = i;
    }
    for (int32_t i = 100; i > 0; --i) {
        int32_t x = rand() % i + 1;
        std::swap(a[i], a[x]);
        std::cout << a[i] << ' ';
        if ((i - 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

