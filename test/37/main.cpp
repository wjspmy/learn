/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月15日 星期四 17时32分25秒
 ************************************************************************/

#include <iostream>
#include "ugly_num.h"

int32_t main() {
    int32_t n = 0;
    std::cout << "Please input the number: ";
    std::cin >> n;

    std::cout << solution(n) << std::endl;
    return 0;

}
