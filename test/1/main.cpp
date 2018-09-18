/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月18日 星期二 22时25分31秒
 ************************************************************************/

#include <iostream>
#include "1.h"

Node* phead = NULL;
Node* pindex = NULL;

int main() {
    Node* p = NULL;
    add(&p, 10);
    add(&p, 6);
    add(&p, 14);
    add(&p, 4);
    add(&p, 8);
    add(&p, 12);
    add(&p, 16);
    adjust(p);
    print_node(phead);
    return 0;

}
