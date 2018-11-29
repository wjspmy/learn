/*************************************************************************
    > File Name: copy_link.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月27日 星期二 20时56分19秒
 ************************************************************************/

#ifndef _LEARN_TEST_49_COPY_LINK_H_
#define _LEARN_TEST_49_COPY_LINK_H_

#include <stdint.h>

struct Link {
    char value;
    Link* next;
    Link* sibling;
};

void copy(Link* head, Link* new_head);

void copyt(Link* head, Link* new_head);

void print(Link* head);

void print_sibling(Link* head);


#endif
