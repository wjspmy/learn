/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月17日 星期三 21时38分20秒
 ************************************************************************/

#include <iostream>
#include "reversal.h"

int32_t main() {
    List* head = creat();
    
    print_list(head);

    head = reversal(head);

    print_list(head);


    return 0;
}
