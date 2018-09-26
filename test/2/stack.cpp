/*************************************************************************
    > File Name: stack.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月25日 星期二 23时04分07秒
 ************************************************************************/

#include <iostream>
#include <stdint.h>
#include "stack.h"

void StackMin::push(int32_t value) {
    s_data.push(value);
    if (s_min.empty() || s_min.top() >= value) {
        s_min.push(value);
    } else {
        s_min.push(s_min.top());
    }
}

void StackMin::pop() {
    if (s_data.empty() || s_min.empty()) {
        return;
    }
    s_data.pop();
    s_min.pop();
}

int32_t StackMin::stack_min() {
    return s_min.top();
}
