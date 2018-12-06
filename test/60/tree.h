/*************************************************************************
    > File Name: tree.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月05日 星期三 23时28分56秒
 ************************************************************************/

#ifndef _LEARN_TEST_60_TREE_H_
#define _LEARN_TEST_60_TREE_H_

#include <stdint.h>
#include <time.h>

struct Tree {
    int32_t value;
    Tree* left;
    Tree* right;
};

Tree* creat(Tree* root);
void print(Tree* root);
int32_t depth(Tree* root);
bool balanced(Tree* root);
bool balanced_2(Tree* root, int32_t& depth);

#endif
