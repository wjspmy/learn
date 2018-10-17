/*************************************************************************
    > File Name: reversal.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月17日 星期三 21时38分20秒
 ************************************************************************/

#ifndef _LEARN_TEST_19_REVERSAL_H_
#define _LEARN_TEST_19_REVERSAL_H_

#include <stdint.h>

struct List {
    int32_t value;
    List* next;
};

List* creat();
void print_list(List* head);

#endif
