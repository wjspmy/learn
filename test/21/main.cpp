/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月25日 星期四 22时34分20秒
 ************************************************************************/

#include <iostream>
#include "left_rotate.h"

int32_t main() {
    char a[] = "123456";
    
    int32_t n = 0;
    std::cout << "Please input the number of N : ";
    std::cin >> n;

    left_rotate(a, n);
    std::cout << a << std::endl;
}
