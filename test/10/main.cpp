/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月11日 星期四 18时50分30秒
 ************************************************************************/

#include <iostream>
#include "find_num.h"


int32_t main() {
    int32_t length = 0;
    std::cout << "Please input the length of array:";
    std::cin >> length;

    int32_t array[length];
    std::cout << "Please input the value of array:";
    for (int32_t i = 0; i < length; ++i) {
        std::cin >> array[i];
    }

    int32_t k = 0;
    std::cout << "Please input the value of K:";
    std::cin >> k;

    if (!find_num(array, length, k)) {
        std::cout << "error!\n";
    }
    return 0;
    
}
