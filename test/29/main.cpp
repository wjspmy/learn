/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月31日 星期三 23时58分03秒
 ************************************************************************/

#include <iostream>
#include "reorder_odd_even.h"

int32_t main() {
    int32_t n = 0;
    std::cout << "Please input the length of array :";
    std::cin >> n;

    int32_t a[n] = {0};
    for (int32_t i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    reorder(a, n);

    for (int32_t i = 0; i < n; ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
