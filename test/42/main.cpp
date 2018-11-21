/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月20日 星期二 23时01分18秒
 ************************************************************************/

#include <iostream>
#include "min.h"

int32_t main() {
    int32_t len = 0;
    std::cout << "Please input the length of array :";
    std::cin >> len;
    
    int32_t a[len] = {0};
    std::cout << "Please input the value of array :";
    for (int32_t i = 0; i < len; ++i) {
        std::cin >> a[i];
    }

    std::cout << "min_1 : ";
    min_1(a, len);

    std::cout << "min_2 : ";
    min_2(a, len);

    return 0;
}
