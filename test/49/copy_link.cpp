/*************************************************************************
    > File Name: copy_link.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月27日 星期二 20时56分19秒
 ************************************************************************/

#include <iostream>
#include "copy_link.h"

void copy(Link* head, Link* new_head) {
   
    new_head->value = head->value;
    new_head->next = NULL;
    new_head->sibling = NULL;
    head = head->next;
    
    Link* p = new_head;

    for(int32_t i = 1; i < 5; ++i) {
        Link* t =new Link;
        t->value = head->value;
        t->next = NULL;
        t->sibling = NULL;
        p->next = t;
        p = t;
        head = head->next;
    }
    head = NULL;
}

void copyt(Link* head,Link* new_head) {
    Link* p = new_head;
    
    Link* q = head;
    
    while (p != NULL) {
        Link* t = new_head;
        if (q->next == NULL) {
           if (q->sibling == NULL) {
               break;
           } else {
               while (t->value != q->sibling->value) {
                   t = t->next;
               }
               p->sibling = t;
               break;
           }
        }
        
        while (q->sibling == NULL && q->next != NULL) {
            q = q->next;
            p = p->next;
        }
        
        while (t != NULL && t->value != q->sibling->value) {
            t = t->next;
        }
        p->sibling = t;

        p = p->next;
        q = q->next;
    }
}

void print(Link* head) {
    Link* p = head;
    while (p != NULL) {
        std::cout << p->value << ' ';
        p = p->next;
    }
    std::cout << std::endl;
}

void print_sibling(Link* head) {
    Link* p = head;
    while (p != NULL) {
        if (p->sibling != NULL) {
            std::cout << p->sibling->value << ' ';
        }
        p = p->next;

    }
    std::cout << std::endl;
}

void print_address(Link* head) {
    Link* p = head;
    while (p) {
        std::cout << p << ' ';
        p = p->next;
    }
    std::cout << std::endl;
}
