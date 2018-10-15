/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月13日 星期六 17时13分12秒
 ************************************************************************/

#include <iostream>
#include "fibonacci.h"

int32_t main() {
    int n = 0;
    std::cout << "Please input the value of N : ";
    std::cin >> n;
    
    std::cout << "The fibonacci_1 is "
        << fibonacci_1(n) << std::endl;

    std::cout << "The fibonacci_2 is "
        << fibonacci_2(n) << std::endl;

	std::cout << "The fibonacci_3 is " 
		<< fibonacci_3(n - 1) << std::endl;

    
    return 0;
}

