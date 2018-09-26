/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月18日 星期二 22时45分05秒
 ************************************************************************/

#include <iostream>
#include "stack.h"


int main() {
	StackMin s;
	s.push(2);
    std::cout << s.stack_min() << std::endl;
    s.push(3);
    std::cout << s.stack_min() << std::endl;
    s.push(1);
    std::cout << s.stack_min() << std::endl;
    s.pop();
    std::cout << s.stack_min() << std::endl;
    return 0;
}
