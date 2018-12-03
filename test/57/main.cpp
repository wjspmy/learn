/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月03日 星期一 22时24分03秒
 ************************************************************************/

#include <iostream>
#include "sort_age.h"

int32_t main() {
    clock_t start = clock();
    int32_t a[MAX] = {0};
    for (int32_t i = 0; i < MAX; ++i) {
        a[i] = rand() % MAX_AGE + 1;
    }
    sort(a, MAX);
    std::cout << std::endl;
    clock_t end = clock();
    clock_t time = end - start;
    std::cout << time << '/'
        << CLOCKS_PER_SEC << std::endl;
    return 0;
}
