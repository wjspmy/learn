/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月18日 星期二 22时25分31秒
 ************************************************************************/

#include <iostream>
#include "1.h"


int main() {
    Node* p = NULL;
    Node* phead = NULL;
    Node* pindex = NULL;

    p = add(p, 10);
    p = add(p, 6);
    p = add(p, 14);
    p = add(p, 4);
    p = add(p, 8);
    p = add(p, 12);
    p = add(p, 16);
    
    adjust(p, phead, pindex);
    print_node(phead);

    return 0;
}
