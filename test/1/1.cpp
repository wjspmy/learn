/*************************************************************************
    > File Name: 1.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月16日 星期日 22时25分55秒
 ************************************************************************/

#include <iostream>
#include <stdint.h>
#include "1.h"

Node* phead = NULL;
Node* pindex = NULL;

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
    return root;
}

void adjust(Node* root) {
    if (root == NULL) {
        return;
    }

    if (root->left != NULL) {
        adjust(root->left);
    }

    root->left = pindex;

    if (pindex == NULL) {
        phead = root;
    } else {
        pindex->right = root;
    }
    pindex = root;
    if (root->right != NULL) {
        adjust(root->right);
    }
}

void print_node(Node* root) {
    if (root == NULL) {
        return;
    }

    Node* p;
    std::cout << "顺序：";
    while (root != NULL) {
        p = root;
        std::cout << root->value << '\t';
        root = root->right;
    }
    std::cout << "\n逆序：";
    while (p != NULL) {
        std::cout << p->value << '\t';
        p = p->left;
    }
    std::cout << std::endl;
}
