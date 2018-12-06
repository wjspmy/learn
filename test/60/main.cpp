/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月05日 星期三 23时28分56秒
 ************************************************************************/

#include <iostream>
#include "tree.h"

int32_t main() {
    clock_t start = clock();
    Tree* root = creat(root);

    print(root);
    std::cout << std::endl;
    
    std::cout << "Depth: " << depth(root) 
        << std::endl;

    std::cout << "Method_1: ";
    if (balanced(root)) {
        std::cout << "The tree is balanced!\n";
    } else {
        std::cout << "The tree is not balanced!\n";
    }

    int depth = 0;
    std::cout << "Method_2: ";
    if (balanced_2(root, depth)) {
        std::cout << "The tree is balanced!\n";
    } else {
        std::cout << "The tree is not balanced!\n";
    }
    clock_t end = clock();

    std::cout << "Time: " << end - start << '/'
        << CLOCKS_PER_SEC << " s\n";
    
    return 0;
}
