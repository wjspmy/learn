/*************************************************************************
    > File Name: list.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月06日 星期六 00时18分45秒
 ************************************************************************/

#include <iostream>
#include "list.h"


//初始化链表
List* init_list(List* head) {
    head = new List;
    assert(head);
    head->next = NULL;
    return head;
}


//删除
void destory_list(List* head) {
    while (head) {
        List* p = head->next;
        delete(head);
        head = p;
    }
}


//创建一个单链表
void creat_list(List* head) {
    List* p = head;
    for (int32_t i = 0; i < 10; ++i) {
        List* s = new List;
        assert(s);
        s->data = i;
        s->next = NULL;
        p->next = s;
        p = s;
    }
}


//求单链表的长度
int length_list(List* head) {
    int num = -1;
    while (head) {
        ++num;
        head = head->next;
    }
    return num;
}


//打印单链表
void print_list(List* head) {
    List* p = head->next;
    while(p) {
        std::cout << p->data << '\t';
        p = p->next;
    }
    std::cout << std::endl;
}

//寻找单链表的倒数第K个值
void find_k(List* head, int k) {


    if (head == NULL || k < 1 || k > length_list(head)) {
        std::cout << "error\n";
        return;
    }

    int num = length_list(head) - k + 1;

    for (int i = 0; i < num; ++i) {
        head = head->next;
    }
    std::cout << head->data << std::endl;

}
