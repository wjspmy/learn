/*************************************************************************
    > File Name: test4.cpp
    > Author: 潘梦园
    > brief:  在二元树中找出和为某一值的所有路径 题目：输入一个整数和一棵二元树。从树的根结点开始往下访问一直到叶结点所经过的所有结点形成一条 路径。打印出和与输入整数相等的所有路径。
    > Created Time: 2018年09月16日 星期日 16时38分25秒
 ************************************************************************/

#include <iostream>

const int MAX = 100;

struct node {
    int value;
    node* left;
    node* right;
};

void add(node** root, int value) {
    if (*root == NULL) {
        node* t = new node;
        t->value = value;
        t->left = NULL;
        t->right = NULL;
        *root = t;
    } else if ((*root)->value > value) {
        add(&(*root)->left, value);
    } else if ((*root)->value < value) {
        add(&(*root)->right, value);
    }
}

void findpath(int* path, int sum, int top, node* root) {
    sum -= root->value;
    path[top++] = root->value;
    
    if (root->left == NULL && root->right == NULL) {
        if (sum == 0) {
            for (int i = 0; i < top; ++i) {
                std::cout << path[i] << '\t';
            }
            std::cout << std::endl;
        }
        return;
    }
    findpath(path, sum, top, root->left);
    findpath(path, sum, top, root->right);
}

int main() {
    node* p = NULL;
    int path[MAX];
    int top = 0;
    add(&p, 10);
    add(&p, 5);
    add(&p, 12);
    add(&p, 4);
    add(&p, 7);
    findpath(path, 22, top, p);
    return 0;
}
