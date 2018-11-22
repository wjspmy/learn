/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月22日 星期四 17时14分16秒
 ************************************************************************/

#include <iostream>
#include "power.h"

int32_t main() {
    double base = 0;
    int32_t exponent = 0;

    std::cin >> base >> exponent;
    
    std::cout << power(base, exponent) << std::endl;

    return 0;
}
