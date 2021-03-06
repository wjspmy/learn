/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月25日 星期日 21时41分08秒
 ************************************************************************/

#include <iostream>
#include "last_common_parent.h"

int32_t main() {
    time_t start = clock();
    Tree* root = creat(root);

    std::cout << "先序遍历：";
    print_1(root);
    std::cout << std::endl;
    std::cout << "中序遍历：";
    print_2(root);
    std::cout << std::endl;

    Tree* p1 = root->left->left->left;
    Tree* p2 = root->left->right;

    std::cout << "需要求的2个节点的值为， p1 = "
        << p1->data << ", p2 = "
        << p2->data << std::endl;

    Tree* parent = solution(root, p1, p2);


    std::cout << "p1和p2的父节点为："
        << parent->data << std::endl;
    
    time_t end = clock();
    long double time = (end - start) ;
        // CLOCKS_PER_SEC;
    std::cout << "运行时间：" << time 
        << '/' << CLOCKS_PER_SEC << std::endl;

    return 0;

}
