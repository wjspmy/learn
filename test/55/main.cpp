/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月02日 星期日 14时08分07秒
 ************************************************************************/

#include <iostream>
#include "sum.h"
int32_t main() {
    int32_t a = 0;
    int32_t b = 0;
    std::cout << "Please input the value of a, b:";
    std::cin >> a >> b;
    int32_t s = sum(a, b);
    std::cout << "a + b = " << s << std::endl;
    return 0;

}
