/*************************************************************************
    > File Name: stack.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月23日 星期日 22时36分53秒
 ************************************************************************/

#include <stdint.h>
#include <stack>

#ifndef _LEARN_TEST_2_STACK_H_
#define _LEARN_TEST_2_STACK_H_

class StackMin {
    public:
        void push(int32_t value);
        void pop();
        int32_t stack_min();
    private:
        std::stack<int32_t> s_data;
        std::stack<int32_t> s_min;

};
    
#endif

