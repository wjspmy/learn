/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月19日 星期一 20时32分53秒
 ************************************************************************/

#include <iostream>
#include "min_number.h"

int32_t main() {

    int32_t a[2];

    for (int32_t i = 0; i < 2; ++i) {
        std::cin >> a[i];
    }
    
    min_number(a, 2);

    return 0;
}
