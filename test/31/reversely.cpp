/*************************************************************************
    > File Name: reversely.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月09日 星期五 19时07分39秒
 ************************************************************************/

#include <iostream>
#include "reversely.h"

List* init_list(List* root) {
    root = new List;
    root->next = NULL;
    return root;
}

void creat_list(List* p) {

    List* root = p;
    for (int32_t i = 0; i < 10; ++i) {
        
        List* temp = new List;
        temp->value = i;
        temp->next = NULL;
        root->next = temp;
        root = temp;
        
    }

}

void print_list(List* root) {
    List* p = root->next;
    while (p != NULL) {
        std::cout << p->value << ' ';
        p = p->next;
    }
    std::cout << std::endl;
}

void reversely_1(List* root, std::stack<int32_t> &s) {
    List* p = root->next;
    while (p != NULL) {
        s.push(p->value);
        p = p->next;
    }
    while(!s.empty()) {
        std::cout << s.top() << ' ';
        s.pop();
    }
    std::cout << std::endl;
}

void reversely_2(List* root) {
    if (root->next != NULL) {
        reversely_2(root->next);
    }
    std::cout << root->value << ' ';
}







