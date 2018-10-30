/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月30日 星期二 22时31分05秒
 ************************************************************************/

#include <iostream>
#include "bepth_of_binary_tree.h"

int32_t main() {
    Node* root = NULL;

    root = creat(root);

    print_node(root);
    std::cout << std::endl;

    std::cout << depth(root) << std::endl;

    return 0;
}
