/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月27日 星期二 20时56分19秒
 ************************************************************************/

#include <iostream>
#include "copy_link.h"

int32_t main() {

    clock_t start = clock();
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

    std::cout << "head_address:";
    print_address(head);

    std::cout << "head: ";
    print(head);

    std::cout << "head->sibling:";
    print_sibling(head);
    std::cout << std::endl;

    Link* new_head = new Link;
    copy(head, new_head);

    std::cout << "new_head_address:";
    print_address(new_head);

    std::cout << "new_head:";
    print(new_head);

    copyt(head, new_head);

    std::cout << "new_head->sibling: ";
    print_sibling(new_head);
    delete[] p;
    p = NULL;

    clock_t end = clock();
    std::cout << "Time: " << end - start << '/'
        << CLOCKS_PER_SEC << "s\n";

    return 0;

   
}
