/*************************************************************************
    > File Name: print_path.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月26日 星期三 23时08分57秒
 ************************************************************************/

#ifndef _LEARN_TEST_4_PRINT_PATH_H
#define _LEARN_TEST_4_PRINT_PATH_H

#include <stdint.h>
#include <queue>

struct Node {
    int32_t value;
    Node* right;
    Node* left;
};

Node* add(Node* root, int32_t value);
void FindPath(std::queue<int32_t> path, int32_t sum, Node* root);

#endif
