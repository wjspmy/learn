/*************************************************************************
    > File Name: permutation.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月01日 星期四 16时47分22秒
 ************************************************************************/

#include <iostream>
#include "permutation.h"

void permutation(char* a, char* start) {
    if (!a || !start) {
        return;
    }
    
    if (*start == '\0') {
        std::cout << a << std::endl;
    } else {
        for(char* c = start; *c != '\0'; ++c) {
            std::swap(*c, *start);
            permutation(a, start + 1);
            std::swap(*a, *start);
        }
    }
}


