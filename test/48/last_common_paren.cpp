/*************************************************************************
    > File Name: last_common_paren.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月25日 星期日 21时41分08秒
 ************************************************************************/

#include <iostream>
#include "last_common_parent.h"

Tree* creat(Tree* root) {
    int32_t data = 0;
    std::cin >> data;

    if (data == 0) {
        return NULL;
    }

    root = new Tree;
    root->data = data;
    root->left = creat(root->left);
    root->right = creat(root->right);
    return root;


}

//先序遍历
void print_1(Tree* root) {
    if (root != NULL) {
        std::cout << root->data << ' ';
        print_1(root->left);
        print_1(root->right);
    }
}

//中序遍历
void print_2(Tree* root) {
    if (root != NULL) {
        print_2(root->left);
        std::cout << root->data << ' ';
        print_2(root->right);
    }
}

Tree* solution(Tree* root, Tree* p1, Tree* p2) {
    if (root == NULL) {
        return NULL;
    }
    if (p1 == root || p2 == root) {
        return root;
    }
    Tree* left = solution(root->left, p1, p2);
    Tree* right = solution(root->right, p1, p2);
    if (left == NULL) {
        return right;
    } else if (right == NULL) {
        return left;
    } else {
        return root;
    }
}
