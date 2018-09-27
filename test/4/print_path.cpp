/*************************************************************************
    > File Name: print_path.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月27日 星期四 21时45分30秒
 ************************************************************************/

#include <iostream>
#include "print_path.h"

Node* add(Node* root, int32_t value) {
    if (root == NULL) {
        root = new Node;
        root->value = value;
        root->right = NULL;
        root->left = NULL;
    } else if (root->value > value) {
        root->left = add(root->left, value);
    } else if (root->value < value) {
        root->right = add(root->right, value);
    }
}

void FindPath(std::queue<int32_t> path, int32_t sum, Node* root) {
    sum -= root->value;
    path.push(root->value);
    if (root->left == NULL && root->right == NULL) {
        if (sum == 0) {
            int32_t path_size = path.size();
            for (int32_t i = 0; i < path_size; ++i) {
                std::cout << path.front() << '\t';
                path.pop();
            }
            std::cout << std::endl;
        }
        return;
    }
    FindPath(path, sum, root->left);
    FindPath(path, sum, root->right);
}

