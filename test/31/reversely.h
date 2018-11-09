/*************************************************************************
    > File Name: reversely.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月09日 星期五 19时07分38秒
 ************************************************************************/

#ifndef _LEARN_TEST_31_REVERSELY_H_
#define _LEARN_tEST_31_REVERSELY_H_

#include <stdint.h>
#include <stack>


struct List {
    int32_t value;
    List* next;
};


List* init_list(List* root);
List* creat_list(List* root);
void print_list(List* root);
void reversely_1(List* root, std::stack<int32_t> &s);
void reversely_2(List* root);

#endif
