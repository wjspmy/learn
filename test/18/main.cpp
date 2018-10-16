/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月16日 星期二 22时26分40秒
 ************************************************************************/

#include <iostream>
#include "queue_by_two_stack.h"

int32_t main() {
    QueueByStack<int32_t> queue;
    for (int32_t i = 0; i < 10; ++i) {
        queue.push(i);
    }
    std::cout << queue.front() << std::endl;

    return 0;
}
