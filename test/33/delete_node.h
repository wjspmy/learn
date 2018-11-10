/*************************************************************************
    > File Name: delete_node.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月10日 星期六 18时08分12秒
 ************************************************************************/

#ifndef _LEARN_TEST_33_DELETE_NODE_H_
#define _LEARN_TEST_33_DELETE_NODE_H_

#include <stdint.h>

struct Node {
    int32_t value;
    Node* next;
};

Node* creat_list(Node* head);
void print_list(Node* head);
void delete_node(Node* head, Node* p);

#endif
