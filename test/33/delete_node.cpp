/*************************************************************************
    > File Name: delete_node.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月10日 星期六 18时08分12秒
 ************************************************************************/

#include <iostream>
#include "delete_node.h"

Node* creat_list(Node* head) {
    head = new Node;
    head->value = 0;
    head->next = NULL;

    Node * p = head;
    for (int32_t i = 1; i < 10; ++i) {
        Node* temp = new Node;
        temp->value = i;
        temp->next = NULL;
        p->next = temp;
        p = temp;
    }
    return head;
    
}

void delete_node(Node* head, Node* p) {
    if (!head || !p) {
        return;
    }
    if (p->next != NULL) {
        Node* next = p->next;
        p->value = next->value;
        p->next = next->next;
        delete next;
        next = NULL;
    } else {
        Node* q = head;
        while (q->next != p) {
            q = q->next;
        }
        q->next = NULL;
        delete q;
        q = NULL;
    }
}

void print_list(Node* head) {
    Node* p = head;
    while (p != NULL) {
        std::cout << p->value << ' ';
        p = p->next;
    }
    std::cout << std::endl;
}
