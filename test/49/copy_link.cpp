/*************************************************************************
    > File Name: copy_link.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月27日 星期二 20时56分19秒
 ************************************************************************/

#include <iostream>
#include "copy_link.h"

Link* copy(Link* head, Link* new_head) {
    Link* p = head;
    if (new_head == NULL) {
        new_head->
    }
    while (p != NULL) {
        new_head = new Link;
        new_head->value = p->value;
        new_head->next = NULL;
        new_head->sibling = NULL;
        new_head = new_head->next;
        p = p->next;
    }
    new_head->next = NULL;
    
    return new_head;
    
}

void print(Link* head) {
    Link* p = head;
    while (p != NULL) {
        std::cout << p->value << ' ';
        p = p->next;
    }
    std::cout << std::endl;
}
