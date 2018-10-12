/*************************************************************************
    > File Name: mirror.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月11日 星期四 23时01分39秒
 ************************************************************************/

#include <iostream>
#include "mirror.h"

Tree* add_tree(Tree* root, int32_t value) {
    if (root == NULL) {
        root = new Tree;
        root->value = value;
        root->left = NULL;
        root->right = NULL;
    } else if (root->value > value) {
        root->left = add_tree(root->left, value);
    } else if (root->value < value) {
        root->right = add_tree(root->right, value);
    }
    return root;
}

void mirror_tree(Tree* root) {
    if (root) {
        mirror_tree(root->left);
        mirror_tree(root->right);
        Tree* temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}

void print_tree(Tree* root) {
    if (root) {
        print_tree(root->left);
        std::cout << root->value << '\t';
        print_tree(root->right);
    }
}
