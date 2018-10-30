/*************************************************************************
    > File Name: bepth_of_binary_tree.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月30日 星期二 22时30分49秒
 ************************************************************************/

#ifndef _LEARN_TEST_27_BEPTH_OF_BINARY_TREE_H_
#define _LEARN_TEST_27_BEPTH_OF_BINARY_TYPE_H_

#include <stdint.h>

struct Node {
    int32_t data;
    Node* left;
    Node* right;
};


Node* creat(Node* root);
void print_node(Node* root);
int32_t depth(Node* root);


#endif

