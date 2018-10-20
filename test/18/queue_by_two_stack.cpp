/*************************************************************************
    > File Name: queue_by_two_stack.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月20日 星期六 21时23分41秒
 ************************************************************************/
#include <iostream>
#include "queue_by_two_stack.h"

void QueueByStack::pop() {
    if (s1.empty() && s2.empty()) {
        std::cout << "The queue is empty!\n";
    }
    if (!s2.empty()) {
        s2.pop();
    } else {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
    }
}

void QueueByStack::push(int32_t data) {
    s1.push(data);
}


int32_t QueueByStack::front() {
    assert(!s1.empty() || !s2.empty());

    if (s2.empty()) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    return s2.top();
}

int32_t QueueByStack::size() {
    return s1.size() + s2.size();
}

bool QueueByStack::empty() {
    if (s1.empty() && s2.empty()) {
        return true;
    }
    return false;
}
