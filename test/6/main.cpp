/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月29日 星期六 18时47分24秒
 ************************************************************************/

#include <iostream>
#include "verify_sequence_BST.h"

int32_t main() {
    int32_t n;
    std::cout << "Please input the size of array:";
    std::cin >> n;
    int32_t a[n];
    std::cout << "Please input the value of array:";
    for (int32_t i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    if (Verify(a, n)) {
        std::cout << "YeS\n";
    } else {

        std::cout << "NO\n";
    }
}
