/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月19日 星期一 20时32分53秒
 ************************************************************************/

#include <iostream>
#include "min_number.h"

int32_t main() {
    int32_t len = 0;
    std::cout << "Please input the length of array: ";
    std::cin >> len;
    int32_t a[len];
    for (int32_t i = 0; i < len; ++i) {
        std::cin >> a[i];
    }
    min_number(a, len);
    return 0;
}
