/*************************************************************************
    > File Name: 1.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月16日 星期日 22时07分19秒
 ************************************************************************/

#ifndef __1_H_
#define __1_H_

#include <stdint.h>
struct Node {
    int32_t value;
    Node* left;
    Node* right;
};

void add(Node** root, int32_t value);
void adjust(Node* root);
void print_node(Node* root);

#endif
