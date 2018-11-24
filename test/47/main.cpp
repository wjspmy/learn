/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月24日 星期六 19时30分21秒
 ************************************************************************/

#include <iostream>
#include "more_number.h"

int32_t main() {
    int32_t a[10] = {1, 4, 2, 2, 2, 2, 2, 2, 5, 8};

    for(int32_t i = 0; i < 10; ++i) {
        std::cin >> a[i];
    }

    int num = solution(a, 10);

    std::cout << num << std::endl;

    return 0;
}
