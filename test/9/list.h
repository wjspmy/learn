/*************************************************************************
    > File Name: list.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月06日 星期六 00时12分21秒
 ************************************************************************/

#ifndef _LEARN_TEST_9_LIST_H_
#define _LEARN_TEST_9_LIST_H_

#include <assert.h>
#include <stdint.h>


struct List{
    int32_t data;
    List* next;
};

List* init_list(List* head);
void destory_list(List* head);
void creat_list(List* head);
void print_list(List* head);
int length_list(List* head);
void find_k(List* head, int k);




#endif

