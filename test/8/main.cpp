/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月05日 星期五 23时00分36秒
 ************************************************************************/

#include <iostream>
#include "sum.h"

int main() {
    int n;
    std::cout << "Please input the value of the N:";
    std::cin >> n;
    std::cout << "The factorial of N : ";
    std::cout << sum_solution(n) << std::endl;
    return 0;
}

