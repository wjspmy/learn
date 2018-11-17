/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月17日 星期六 17时14分41秒
 ************************************************************************/

#include <iostream>
#include "reverse_stack.h"

int32_t main() {
    Reverse r;
    for (int32_t i = 1; i < 6; ++i) {
        std::cout << i << ' ';
        r.push(i);
    }
    std::cout << std::endl;

    r.reverse_stack_2();
    while (!r.empty()) {
        std::cout << r.top() << ' ';
        r.pop();
    }
    
    std::cout << std::endl;

    return 0;

}
