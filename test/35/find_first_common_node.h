/*************************************************************************
    > File Name: find_first_common_node.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月12日 星期一 23时08分14秒
 ************************************************************************/

#ifndef _LEARN_TEST_35_FIND_FIRST_COMMON_NODE_H_
#define _LEARN_TEST_35_FIND_FIRST_COMMON_NODE_H_

#include <stdint.h>
#include <assert.h>

struct List {
    int32_t value;
    List* next;
};
 
List* creat_node(int32_t value);
void connect_node(List* p, List* pnext);
void print_list(List* head);

#endif
