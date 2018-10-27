/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月27日 星期六 19时36分28秒
 ************************************************************************/

#include <iostream>
#include "number_of_one.h"

int32_t main() {
    int32_t num = 0;
    std::cout << "Please input the value of number :";
    std::cin >> num;

    std::cout << solution(num) << std::endl;
}
