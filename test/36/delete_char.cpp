/*************************************************************************
    > File Name: delete_char.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月15日 星期四 16时52分36秒
 ************************************************************************/

#include <iostream>
#include "delete_char.h"


void fun(char* a, int32_t n) {

    for (int32_t i = n; a[i] != '\0'; ++i) {
        a[i] = a[i + 1];
    }
}
//从第一字符串中删除第二个字符串的所有字符
void delete_char_1(char* a, char* b) {

    for (int32_t i = 0; a[i] != '\0'; ++i) {
        for (int32_t j = 0; b[j] != '\0'; ++j) {
            if (a[i] == b[j]) {
                fun(a, i);
                continue;
            }
        }
    }
    std::cout << a << std::endl;  
}

//方法二
void delete_char_2(char* a, char* b) {
    assert(a != NULL || b != NULL);

    int32_t hash[256];
    memset(hash, 0, sizeof(hash));
    char* temp = b;
    while (*temp != '\0') {
        hash[*temp] = 1;
        ++temp;
    }

    char* slow = a;
    char* fast = a;

    while (*fast != '\0') {
        if (hash[*fast] != 1) {
            *slow = *fast;
            ++slow;
        }
        ++fast;
    }
    *slow = '\0';
    std::cout << a << std::endl;
}
