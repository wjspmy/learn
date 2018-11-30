/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月30日 星期五 22时08分41秒
 ************************************************************************/

#include <iostream>
#include "tree.h"

int32_t main() {
    clock_t start = clock();

    Tree* root1 = NULL;
    std::cout << "root1:";
    creat(root1);
    Tree* root2 = NULL;
    std::cout << "root2:";
    creat(root2);

    std::cout << "root1:";
    print(root1);
    std::cout << std::endl;

    std::cout << "root2:";
    print(root2);
    std::cout << std::endl;

    if (lookup(root1, root2)) {

        std::cout << "SUCCESS" << std::endl;

    } else {
        std::cout << "ERROR" << std::endl;
    }
    clock_t end = clock();
    double time = end - start;
    std::cout << "Time : " << time << '/' 
        << CLOCKS_PER_SEC << 's'
        << std::endl;

    return 0;
}
