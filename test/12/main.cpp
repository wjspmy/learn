/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月11日 星期四 23时20分26秒
 ************************************************************************/

#include <iostream>
#include "print_tree.h"


int32_t main() {
    Tree* root = NULL;
    TreeNode c;
    root = c.add_tree(root, 8);
    root = c.add_tree(root, 6);
    root = c.add_tree(root, 10);
    root = c.add_tree(root, 5);
    root = c.add_tree(root, 7);
    root = c.add_tree(root, 9);
    root = c.add_tree(root, 11);
    
    c.get_push(root);
    c.print_tree();
    std::cout << std::endl;
    return 0 ;

}




