/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月06日 星期六 00时18分45秒
 ************************************************************************/

#include <iostream>
#include "list.h"

int main() {
    List* p = init_list(p);
    creat_list(p);
    print_list(p);
    
    int k;
    std::cout << "Please input the value of K : ";
    std::cin >> k;
    find_k(p, k);

    destory_list(p);
    return 0;
}



