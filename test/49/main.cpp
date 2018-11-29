/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月27日 星期二 20时56分19秒
 ************************************************************************/

#include <iostream>
#include "copy_link.h"

int32_t main() {
    Link* p = new Link[5];
    
    int32_t i = 0;
    for (; i < 5; ++i) {
        p[i].value = 'A' + i;
        if (i < 4) {
            p[i].next = &p[i + 1];
        }
    }
    p[i].next = NULL;
    p[0].sibling = &p[2];
    p[1].sibling = &p[4];
    p[2].sibling = NULL;
    p[3].sibling = &p[1];
    p[4].sibling = NULL;
    Link* head = &p[0];

    std::cout << "head: ";
    print(head);

    Link* new_head = new Link;
    copy(head, new_head);
    print(new_head);
    //std::cout << new_head->value;
    copyt(head, new_head);

    //std::cout << "new_head: ";
    //print_sibling(new_head);

    return 0;

   
}
