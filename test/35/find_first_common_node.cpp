/*************************************************************************
    > File Name: find_first_common_node.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月12日 星期一 23时08分39秒
 ************************************************************************/

#include <iostream>
#include "find_first_common_node.h"

List* creat_node(int32_t value) {
    List* node = new List;
    node->value = value;
    node->next = NULL;
    return node;
}

void connect_node(List* p, List* pnext) {
    assert(p != NULL);
    p->next = pnext;
} 

void print_list(List* head) {
    List* p = head;
    while (p) {
        std::cout << p->value << ' ';
        p = p->next;
    }
    std::cout << std::endl;
}


