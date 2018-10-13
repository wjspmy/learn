/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月12日 星期五 23时32分16秒
 ************************************************************************/

#include <iostream>
#include "first_char.h"

int32_t main() {
    char c[] = "abaccdeff";
    if (!first_char(c)) {
        std::cout << "NO\n";
    }
}
