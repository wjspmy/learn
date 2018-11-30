/*************************************************************************
    > File Name: tree.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月30日 星期五 22时08分41秒
 ************************************************************************/

#ifndef _LEARN_TEST_50_TREE_H_
#define _LEARN_TEST_50_TREE_H_

#include <stdint.h>

struct Tree {
    char value;
    Tree* left;
    Tree* right;
};

void creat(Tree* &root);

void print(Tree* root);

bool fun1(Tree* root1, Tree* root2);

bool fun2(Tree* root1, Tree* root2);

bool lookup(Tree* root1, Tree* root2);

#endif
