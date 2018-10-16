/*************************************************************************
    > File Name: queue_by_two_stack.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月16日 星期二 22时26分11秒
 ************************************************************************/

#ifndef _LEARN_TEST_18_QUEUE_BY_TWO_STACK_H_
#define _LEARN_TEST_18_QUEUE_BY_TWO_STACK_H_

#include <stack>
#include <cassert>
#include <stdint.h>

template<typename T>


class QueueByStack {
public:
    void pop();
    void push(const T& data);
    T& front();
    int32_t size();
    bool empty();
private:
    std::stack<T> s1;
    std::stack<T> s2;
};

#endif
