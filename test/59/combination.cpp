/*************************************************************************
    > File Name: combination.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月05日 星期三 22时04分09秒
 ************************************************************************/

#include <iostream>
#include "combination.h"

void combination(char* s) {
    if (s == NULL) {
        return;
    }
    int32_t len = strlen(s);
    std::vector<char> result;
    for (int32_t i = 1; i <= len; ++i) {
        solution(s, i, result);
    }
}

void solution(char* s, int32_t num, std::vector<char>& result) {
    if (num == 0) {
        std::vector<char>::iterator iter = result.begin();
        for (; iter < result.end(); ++iter) {
            std::cout << *iter;
        }
        std::cout << std::endl;
        return;
    }
    if (*s == '\0') {
        return;
    }
    result.push_back(*s);
    solution(s + 1, num - 1, result);
    result.pop_back();
    solution(s + 1, num, result);
}
