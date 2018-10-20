/*************************************************************************
    > File Name: queue_by_two_stack.hpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月16日 星期二 22时26分11秒
 ************************************************************************/


#ifndef _LEARN_TEST_18_QUEUE_BY_TWO_STACK_H_
#define _LEARN_TEST_18_QUEUE_BY_TWO_STACK_H_

#include <stack>
#include <cassert>
#include <stdint.h>

class QueueByStack {
public:
    void pop();
    void push(int32_t data);
    int32_t front();
    int32_t size();
    bool empty();
private:
    std::stack<int32_t> s1;
    std::stack<int32_t> s2;
};

#endif
