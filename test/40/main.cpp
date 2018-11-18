/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月18日 星期日 21时15分58秒
 ************************************************************************/

#include <iostream>
#include "continuous.h"

int32_t main() {
    std::vector<int32_t> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(4);
    v.push_back(7);
    v.push_back(8);

    if (continuous(v, 13)) {
        std::cout << "是顺子\n";
    } else {
        std::cout << "不是顺子\n";
    }
    return 0;
}
