/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月13日 星期六 11时16分55秒
 ************************************************************************/

#include <iostream>
#include "num_circle.h"


int32_t main() {
    int32_t n = 0;
    int32_t m = 0;
    std::cout << "Please input the value of N : ";
    std::cin >> n;
    std::cout << "Please input the value of M : ";
    std::cin >> m;

    std::cout << "The last digit is " 
        << last_num(n, m) << std::endl; 
    return 0;
}
