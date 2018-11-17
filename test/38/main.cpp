/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月16日 星期五 23时57分37秒
 ************************************************************************/

#include <iostream>
#include "max_number.h"

int32_t main() {
    int32_t n = 0;
    std::cout << "Please input the number: ";
    std::cin >> n;
    
    std::cout << "方法一: \n";
    max_num(n);

    std::cout << "方法二: \n";
	max_num_2(n);
	std::cout << std::endl;
    return 0;
}
