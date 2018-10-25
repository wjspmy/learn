/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月25日 星期四 23时05分44秒
 ************************************************************************/

#include <iostream>
#include "num_solution.h"

int32_t main() {
    int num = 0;
    std::cout << "Please input the number : ";
    std::cin >> num;

    std::cout << solution(num) << std::endl;

    return 0;
}
