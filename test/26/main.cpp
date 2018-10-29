/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月27日 星期六 20时56分45秒
 ************************************************************************/

#include <iostream>
#include "find_continuous_sequence.h"

int32_t main() {
    int32_t num = 0;
    std::cout << "Please input the value of number :";
    std::cin >> num;

    find_continuous_sequence(num);

    return 0;
}
