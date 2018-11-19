/*************************************************************************
    > File Name: min_number.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月19日 星期一 20时32分53秒
 ************************************************************************/

#include <iostream>
#include "min_number.h"

void min_number(int32_t* a, int32_t len) {
    if (a == NULL || len <= 0) {
        return;
    }
    char* s1 = new char[21];
    char* s2 = new char[21];
    char** num = (char**)(new int32_t[len]);
    for (int32_t i = 0; i < len; ++i) {
        num[i] = new char[11];
    }
}
