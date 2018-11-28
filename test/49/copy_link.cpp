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
}

void copyt(Link* head,Link* new_head) {
    //Link* p1 = new Link;
    Link* p1 = new_head;
    //Link* q1 = new Link;
    Link* q1 = head;
    Link* p2 = new_head;
    
  
    while (p1 != NULL) {
        

        while (p2->value != q1->sibling->value) {
            p2 = p2->next;
        }
        
        p1->sibling = p2;
        std::cout << p2->value << ' ';
        p1 = p1->next;
        p2 = new_head;
        q1 = q1->next;
        
    }
    std::cout<< std::endl;
    
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
