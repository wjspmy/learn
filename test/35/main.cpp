/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月12日 星期一 23时08分39秒
 ************************************************************************/

#include <iostream>
#include "find_first_common_node.h"

int32_t main() {
    List* p1 = creat_node(1);
    List* p2 = creat_node(2);
    List* p3 = creat_node(3);
    List* p4 = creat_node(4);
    List* p5 = creat_node(5);
    
    connect_node(p1, p2);
    connect_node(p2, p3);
    connect_node(p3, p4);
    connect_node(p4, p5);

    std::cout << "P1 : ";
    print_list(p1);

    List* q = new List;
    q->value = 0;
    q->next = p3;
    
    std::cout << "q : ";
    print_list(q);

    std::cout << "p1和q的公共节点：";
    find_first_common_node(p1, q);

    return 0; 
    
}
