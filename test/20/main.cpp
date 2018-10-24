/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月19日 星期五 22时58分02秒
 ************************************************************************/

#include <iostream>
#include "max_substring.h"

int32_t main() {
    char a[] = "ABCBDAB";
    char b[] = "BDCABA";

    std::cout << max_substring(a, b) << std::endl;
    return 0;

}
