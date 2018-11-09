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

List* creat_list(List* root) {

    root = new List;
    root->value = 0;
    root->next = NULL;

    List* p = root;
    for (int32_t i = 1; i < 10; ++i) {
        
        List* temp = new List;
        temp->value = i;
        temp->next = NULL;
        p->next = temp;
        p = temp;
    }
    return root;
}

void print_list(List* root) {
    List* p = root;
    std::cout << "单链表：";
    while (p != NULL) {
        std::cout << p->value << ' ';
        p = p->next;
    }
    std::cout << std::endl;
}

//用栈实现
void reversely_1(List* root, std::stack<int32_t> &s) {
    List* p = root;
    while (p != NULL) {
        s.push(p->value);
        p = p->next;
    }
    std::cout << "方法一：";
    while(!s.empty()) {
        std::cout << s.top() << ' ';
        s.pop();
    }
    std::cout << std::endl;
}

//递归实现
void reversely_2(List* root) {
    if (root->next != NULL) {
        reversely_2(root->next);
    }
    std::cout << root->value << ' ';
}







