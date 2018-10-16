/*************************************************************************
    > File Name: queue_by_two_stack.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月16日 星期二 22时26分40秒
 ************************************************************************/

#include <iostream>
#include "queue_by_two_stack.h"

template<typename T> 
void QueueByStack<T>::pop() {
    if (s1.empty() && s2.empty()) {
        std::cout << "The queue is empty!\n";
    } else if (!s2.empty()) {
        s2.pop();
    } else {
        while (s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
    }
}

template<typename T> 
void QueueByStack<T>::push(const T& data) {
    s1.push(data);
}

template<typename T> 
T& QueueByStack<T>::front() {
    assert(!s1.empty() || !s2.empty());

    if (s2.empty()) {
        while (s1.empty()) {
            s2.push(s1.top);
            s1.pop();
        }
    }
    return s2.top;
}

template<typename T> 
int32_t QueueByStack<T>::size() {
    return s1.size() + s2.size();
}

template<typename T> bool QueueByStack<T>::empty() {
    if (s1.empty() && s2.empty()) {
        return true;
    }
    return false;
}
