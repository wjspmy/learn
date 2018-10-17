/*************************************************************************
    > File Name: reversal.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月17日 星期三 21时38分20秒
 ************************************************************************/

#include <iostream>
#include "reversal.h"

List* creat() {
    List* head = new List;
    List* p = head;
    for(int32_t i = 0; i < 10; ++i) {
        List* temp = new List;
        temp->value = i;
        temp->next = NULL;
        p->next = temp;
        p = temp;
    }
    p->next = NULL;
    return head;
}

void print_list(List* head) {
    List* p = head->next;
    while(p != NULL) {
        std::cout << p->value << '\t';
        p = p->next;
    }
    std::cout << std::endl;
}

