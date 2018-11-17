/*************************************************************************
    > File Name: reverse_stack.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月17日 星期六 17时14分41秒
 ************************************************************************/

#ifndef _LEARN_TEST_39_REVERSE_STACK_H_
#define _LEARN_TEST_39_REVERSE_STACK_H_

#include <stack>
#include <stdint.h>

class Reverse {
private:
    std::stack<int32_t> stack;

public:
    //方法一
    void reverse_stack_1() {
        int32_t len = stack.size();
        
        int32_t a[len] = {0};

        for (int32_t i = 0; i < len; ++i) {
            a[i] = stack.top();
            stack.pop();
        }
        for (int32_t i = len; i > 0; --i) {
            stack.push(i);
        }
    }
    
    void push(int32_t i) {
        stack.push(i);
    }

    void pop() {
        stack.pop();
    }

    int32_t top() {
        return stack.top();
    }

    bool empty() {
        return stack.empty();
    }
    //方法二
    /*void add(int32_t n) {//word上的答案有问题
        if(stack.empty()) {
            stack.push(n);
        } else {
            int32_t top = stack.top();
            stack.pop();
            add(top);
            stack.push(top);
        }
    }
    */
    void reverse_stack_2() {
        if (!stack.empty()) {
            int32_t top = stack.top();
            stack.pop();
            reverse_stack_2();
            stack.push(top);
        }
    }
};

#endif
