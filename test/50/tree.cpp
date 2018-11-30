/*************************************************************************
    > File Name: tree.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月30日 星期五 22时08分41秒
 ************************************************************************/

#include <iostream>
#include "tree.h"


//建立二叉树，#号表示空
void creat(Tree* &root) {
    char c;
    std::cin >> c;
    
    if (c == '#') {
        root = NULL;
    } else {
        root = new Tree;
        root->value = c;
        creat(root->left);
        creat(root->right);
    }
}
//前序遍历打印二叉树
void print(Tree* root) {
    if (root != NULL) {
        std::cout << root->value << ' ';
        print(root->left);
        print(root->right);
    }
}



bool fun1(Tree* root1, Tree* root2) {
    if (root2 == NULL) {
        return true;
    }
    if (root1 == NULL) {
        return false;
    }
    if (root1->value != root2->value) {
        return false;
    }
    return fun1(root1->left, root2->left) &&
        fun1(root1->right, root2->right);
}

bool fun2(Tree* root1, Tree* root2) {
    bool result = false;
    if (root1->value == root2->value) {
        result = fun1(root1, root2);
    }
    if (!result && root1->left != NULL) {
        result = fun2(root1->left, root2);
    }
    if (!result && root1->right != NULL) {
        result = fun2(root1->right, root2);
    }
    return result;
}

//判断root2是否为root1的字结构
bool lookup(Tree* root1, Tree* root2) {
   
    if ((root1 != NULL && root2 == NULL) ||
            (root1 == NULL && root2 != NULL)) {
        return false;
    }
    if (root1 == NULL && root2 == NULL) {
        return true;
    }
    
    return fun2(root1, root2);
  
}
