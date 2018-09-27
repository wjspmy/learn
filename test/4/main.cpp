/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月27日 星期四 21时45分31秒
 ************************************************************************/

#include <iostream>
#include "print_path.h"

int32_t main() {

    std::queue<int32_t> path;
    Node* root = NULL;
    
    root = add(root, 10);
    root = add(root, 5);
    root = add(root, 12);
    root = add(root, 4);
    root = add(root, 7);

    FindPath(path, 22, root);
    return 0;
}
