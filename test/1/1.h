/*************************************************************************
    > File Name: 1.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月16日 星期日 22时07分19秒
 ************************************************************************/

#include <stdint.h>

#ifndef _LEARN_TEST_1_H_
#define _LEARN_TEST_1_H_

struct Node {
    int32_t value;
    Node* left;
    Node* right;
};

Node* add(Node*& root, int32_t value);
void adjust(Node* root, Node*& phead, Node*& pindex);
void print_node(Node* root);

#endif
