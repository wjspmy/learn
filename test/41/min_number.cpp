/*************************************************************************
    > File Name: min_number.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月19日 星期一 20时32分53秒
 ************************************************************************/

#include <iostream>
#include "min_number.h"


//将数组中的数排成最小的数
void min_number(int32_t* a, int32_t len) {
    char** c = (char**)(new int32_t[len]);
    for (int32_t i = 0; i < len; ++i) {
        c[i] = new char[MAX];
        sprintf(c[i], "%d", a[i]);
    }
    char* a1 = new char[MAX];
    char* a2 = new char[MAX];

    
    strcat(a1, c[0]);
    strcat(a1, c[1]);
    strcat(a2, c[1]);
    strcat(a2, c[0]);
    
    //std::cout << a1 << std::endl;
   // std::cout << a2 << std::endl;

    if(strcmp(a1, a2) < 0) {
        std::cout << a1 << std::endl;
    } else {
        std::cout << a2 << std::endl;
    }
}
