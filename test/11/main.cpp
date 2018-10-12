/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月11日 星期四 23时01分39秒
 ************************************************************************/

#include <iostream>
#include "mirror.h"

int32_t main() {
    Tree* root;
    root = add_tree(root, 8);
    root = add_tree(root, 6);
    root = add_tree(root, 10);
    root = add_tree(root, 5);
    root = add_tree(root, 7);
    root = add_tree(root, 9);
    root = add_tree(root, 11);
    
	print_tree(root);
	std::cout << std::endl;

	mirror_tree(root);
	std::cout << std::endl;
	print_tree(root);
    std::cout << std::endl;
	return 0;
}
