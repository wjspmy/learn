/*************************************************************************
    > File Name: eight_queen.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月04日 星期二 22时27分42秒
 ************************************************************************/

#include <iostream>
#include "eight_queen.h"

int32_t count = 0;

void queen(int32_t* a, int32_t index, int32_t num) {
    if (index == num) {
        print(a, index);
        ++count;
        return;
    }
    
    for (int32_t i = 0; i < num; ++i) {
        a[index] = i;
        int32_t sign = 1;
        for (int32_t j = 0; j < index; ++j) {
            if (a[index] == a[j] || a[index]- a[j] == index- j || 
                a[j] - a[index] == index - j) {
                sign = 0;
                break;
            }
        }
        if (sign) {
            queen(a, index + 1, num);
        }
    }

    if (index == 0) {
        std::cout << "解决方法共有" << count << "种\n";
    }

}

void print(int32_t* a, int32_t n) {
    std::cout << "方法 " << count + 1 << " : \n";
    for (int32_t i = 0; i < n; ++i) {
        for (int32_t j = 0; j < n; ++j) {
            if (j == a[i]) {
                std::cout << "1 ";
            } else {
                std::cout << "0 ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
