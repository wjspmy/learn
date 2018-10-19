/*************************************************************************
    > File Name: reversal.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月17日 星期三 21时38分20秒
 ************************************************************************/

#include <iostream>
#include "reversal.h"


//创建一个从0到1的单链表
List* creat() {
    List* head = new List;
    List* p = head;
    p->value = 0;
    p->next = NULL;
    for(int32_t i = 1; i < 10; ++i) {
        List* temp = new List;
        temp->value = i;
        temp->next = NULL;
        p->next = temp;
        p = temp;
    }
    p->next = NULL;
    return head;
}


//将单链表打印出来
void print_list(List* head) {
    List* p = head;
    while(p != NULL) {
        std::cout << p->value << '\t';
        p = p->next;
    }
    std::cout << std::endl;
}


//使单链表反转
List* reversal(List* head) {

    List* reversal_head = NULL;//反转链表的头节点
    List* p = head;
    
    while (p != NULL) {
        List* q = p->next;
        p->next = reversal_head;
        reversal_head = p;
        p = q;
    }

    return reversal_head;
}

