/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月06日 星期四 23时08分30秒
 ************************************************************************/

#include <iostream>
#include "max_diff.h"

int32_t main() {
    int32_t a[] = {2, 4, 1, 16, 7, 5, 11, 9};
    int32_t len = sizeof(a) / sizeof(int32_t);

    std::cout << "solution_1: " << 
        solution_1(a, len) << std::endl;

    std::cout << "solution_2: "
        << solution_2_1(a, len) << std::endl;
    return 0;
}
