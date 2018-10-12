/*************************************************************************
    > File Name: print_tree.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月11日 星期四 23时20分26秒
 ************************************************************************/

#include <iostream>
#include "print_tree.h"

Tree* TreeNode::add_tree(Tree* root, int32_t value) {
    if (root) {
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

void TreeNode::print_tree() {
    if (q.front() == NULL) {
        return;
    }
    Tree* node = q.front();
    std::cout << q.front()->value << '\t';
    q.push(q.front()->left);
    q.push(q.front()->right);
    q.pop();
    print_tree();
}

void TreeNode::get_push(Tree* root){
    q.push(root);
}
