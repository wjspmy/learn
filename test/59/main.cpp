/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月05日 星期三 22时04分09秒
 ************************************************************************/

#include <iostream>
#include "combination.h"

int32_t main() {
    char s[MAX];
    std::cout << "Please input the string: ";
    std::cin >> s;

    combination(s);
    return 0;
}
