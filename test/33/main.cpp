/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月10日 星期六 18时08分12秒
 ************************************************************************/

#include <iostream>
#include "delete_node.h"

int32_t main() {
    Node* head = NULL;
    head = creat_list(head);
    print_list(head);

    Node* p = head->next->next;
    delete_node(head, p);
    print_list(head);
    return 0;
}
