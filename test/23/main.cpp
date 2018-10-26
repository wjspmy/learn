/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月26日 星期五 21时55分00秒
 ************************************************************************/

#include <iostream>
#include "jump_step.h"

int32_t main() {
    int num = 0;
    std::cout << "Please input the number : ";
    std::cin >> num;

    std::cout << "solution_1 : O(2^n)\t" 
        << solution_1(num) << std::endl;

    std::cout << "solution_2 : O(n)\t" 
        << solution_2(num) << std::endl;

    std::cout << "solution_3 : O(n)\t" 
        << solution_3(num) << std::endl;

    return 0;
}
