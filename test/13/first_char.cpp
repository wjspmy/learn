/*************************************************************************
    > File Name: first_char.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月12日 星期五 23时32分16秒
 ************************************************************************/

#include <iostream>
#include "first_char.h"


//在一个字符串中找到第一个只出现一次的字符。
bool first_char(char* c) {
    int32_t array[256] = {0};//ASCII码一共只有256个

    for (int32_t i = 0; i < strlen(c); ++i) {
        ++array[c[i]];
    }

    for (int i = 0; i < strlen(c); ++i) {
        std::cout << array[c[i]] << '\t';
    }
    std::cout << std::endl;
    
    for (int32_t i = 0; i < strlen(c); ++i) {
        if (array[c[i]] == 1) {
            std::cout << c[i] << std::endl;
            return true;
        }
    }
    return false;
}
