/*************************************************************************
    > File Name: mirror.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月11日 星期四 23时01分39秒
 ************************************************************************/

#ifndef _LEARN_TEST_11_MIRROR_H_
#define _LEARN_TEST_11_MIRROR_H_

#include <stdint.h>

struct Tree{
    int32_t value;
    Tree* left;
    Tree* right;
};

Tree* add_tree(Tree* root, int32_t value);
void mirror_tree(Tree* root);
void print_tree(Tree* root);


#endif
