/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月15日 星期四 16时52分36秒
 ************************************************************************/

#include <iostream>
#include "delete_char.h"

int32_t main() {
    char a[] = "They are students";
    char b[] = "aeiou";

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    delete_char_2(a, b);
    
    return 0;
}
