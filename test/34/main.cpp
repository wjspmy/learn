/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月11日 星期日 21时12分42秒
 ************************************************************************/

#include <iostream>
#include "find_number.h"

int32_t main() {
    int32_t a[] = {1, 4, 2, 1, 5, 4};

    for (int32_t i = 0; i < 6; ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;

    find(a, 6);

    return 0;
}