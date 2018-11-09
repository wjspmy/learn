/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月09日 星期五 19时07分39秒
 ************************************************************************/

#include <iostream>
#include "reversely.h"

int32_t main() {
    List* root = NULL;
    root = creat_list(root);
    print_list(root);

    std::stack<int32_t> s;
    reversely_1(root,s);


    std::cout << "方法二：";
    reversely_2(root);
    std::cout << std::endl;

    return 0;
}
