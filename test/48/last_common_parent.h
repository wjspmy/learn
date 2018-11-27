/*************************************************************************
    > File Name: last_common_parent.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月25日 星期日 21时41分08秒
 ************************************************************************/

#ifndef _LEARN_TEST_48_LAST_COMMON_PARENT_H_
#define _LEARN_TEST_48_LAST_COMMON_PARENT_H_

#include <stdint.h>
#include <time.h>

struct Tree {
    int32_t data;
    Tree* left;
    Tree* right;
};

Tree* creat(Tree* root);
void print_1(Tree* root);
void print_2(Tree* root);

Tree* solution(Tree* root, Tree* p1, Tree* p2);

#endif
