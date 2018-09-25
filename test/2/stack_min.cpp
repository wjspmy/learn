/*************************************************************************
    > File Name: stack_min.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月25日 星期二 23时26分44秒
 ************************************************************************/

#include <iostream>
#include <stack>
#include <stdint.h>

class MinStack
{
	public:
	    void push(int32_t value);
	    void pop(void);
	    int32_t min(void);
	private:
	    std::stack<int32_t>   m_data;     // 数据栈，存放栈的所有元素
	    std::stack<int32_t>   m_min;      // 辅助栈，存放栈的最小元素
};

void MinStack::push(int32_t value) {
    m_data.push(value);
    if (m_min.empty() || m_min.top() >= value) {
    	m_min.push(value);
	} else {
    	m_min.push(m_min.top());
	}
}

void MinStack::pop(){
    if(m_data.empty() || m_min.empty()) {
        return;
    }
    m_data.pop();
    m_min.pop();
}

int32_t MinStack::min() {
    return m_min.top();
}

int main() {
    MinStack s;
    std::cout << "将2进栈，栈中最小的值为：";
    s.push(2);
    std::cout << s.min() << std::endl;
    std::cout << "将3进栈，栈中最小的值为：";
    s.push(3);
    std::cout << s.min() << std::endl;
    std::cout << "将1进栈，栈中最小的值为：";
    s.push(1);
    std::cout << s.min() << std::endl;
    std::cout << "将栈顶元素1出栈，栈中最小的值为：";
    s.pop();
    std::cout << s.min() << std::endl;
    return 0;
}


