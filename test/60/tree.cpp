/*************************************************************************
    > File Name: tree.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月05日 星期三 23时28分56秒
 ************************************************************************/

#include <iostream>
#include "tree.h"

Tree* creat(Tree* root) {
    int32_t num = 0;
    std::cin >> num;
    if (num == -1) {
        root = NULL;
        return root;
    }
    root = new Tree;
    
    root->value = num;
    Tree* p = root;

    p->left = creat(p->left);
    p->right = creat(p->right);
    return p;

}

void print(Tree* root) {
    if (root) {
        std::cout << root->value << ' ';
        print(root->left);
        print(root->right);
    }
}

int32_t depth(Tree* root) {
    if (root == NULL) {
        return 0;
    }
    int32_t left = depth(root->left);
    int32_t right = depth(root->right);
    int32_t max = std::max(left, right);

    return max + 1;
}


bool balanced(Tree* root) {
    int32_t count = 0;
    if (root == NULL) {
        return true;
    }
    int32_t left = depth(root->left);
    int32_t right = depth(root->right);
    int32_t dif = left - right;
    if (dif < -1 || dif > 1) {
        return false;
    }
    return balanced(root->left) && balanced(root->right);
}

bool balanced_2(Tree* root, int32_t& depth){
    if (root == NULL) {
        depth = 0;
        return true;
    }
    int32_t left = 0;
    int32_t right = 0;
    if (balanced_2(root->left, left) && 
            balanced_2(root->right, right)) {
        int32_t dif = left - right;
        if (depth >= -1 || depth <= 1) {
            depth = 1 + (left > right) ? left : right;
            return true;
        }
    }
    return false;
}
