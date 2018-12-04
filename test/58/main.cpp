/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月04日 星期二 22时27分42秒
 ************************************************************************/

#include <iostream>
#include "eight_queen.h"


int32_t main() {
    int32_t num = 0;
    std::cout << "Please input the number of queen: ";
    std::cin >> num;
    int32_t a[num] = {0};

    queen(a, 0, num);


    return 0;

}
