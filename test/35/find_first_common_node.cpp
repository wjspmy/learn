/*************************************************************************
    > File Name: find_first_common_node.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月12日 星期一 23时08分39秒
 ************************************************************************/

#include <iostream>
#include "find_first_common_node.h"

//创建结点
List* creat_node(int32_t value) {
    List* node = new List;
    node->value = value;
    node->next = NULL;
    return node;
}

//链接两个结点
void connect_node(List* p, List* pnext) {
    assert(p != NULL);
    p->next = pnext;
} 

//打印链表
void print_list(List* head) {
    if (head == NULL) {
        std::cout << "NULL!\n";
        return;
    }
    List* p = head;
    while (p) {
        std::cout << p->value << ' ';
        p = p->next;
    }
    std::cout << std::endl;
}

//求链表的长度
int32_t length_list(List* head) {
    List* p = head;
    int32_t len = 0;
    while (p != NULL) {
        ++len;
        p = p->next;
    }
    return len;
}

//寻找两个链表的公共结点
void find_first_common_node(List* p1, List* p2) {
    int32_t len1 = length_list(p1);
    int32_t len2 = length_list(p2);
    int32_t def = len1 - len2;
    List* plong = p1;
    List* pshort = p2;
    
    if (len1 < len2) {
        def = len2 - len1;
        plong = p2;
        pshort = p1;
    }
    for (int32_t i = 0; i < def; ++i) {
        plong = plong->next;
    }
    while (plong != NULL && pshort != NULL && 
           plong != pshort ) {
        plong = plong->next;
        pshort = pshort->next;
    }
    List* pcommon = NULL;
    if (plong == pshort) {
        pcommon = plong;
    }
    print_list(pcommon);
    
}


