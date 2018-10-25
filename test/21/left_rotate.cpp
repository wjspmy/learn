/*************************************************************************
    > File Name: left_rotate.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月25日 星期四 22时34分20秒
 ************************************************************************/

#include <iostream>
#include "left_rotate.h"

void left_rotate(char* a, int32_t n) {
    int32_t len = strlen(a);
    std::queue<char> q;

    for(int32_t i = 0; i < n; ++i) {
        q.push(a[i]);
    }

    int32_t j = 0;
    for(int32_t i = n; i < len; ++i, ++j) {
        a[j] = a[i];
    }

    for(; j < len; ++j) {
        a[j] = q.front();
        q.pop();
    }
}
