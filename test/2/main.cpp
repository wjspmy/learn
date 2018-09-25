/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月18日 星期二 22时45分05秒
 ************************************************************************/

#include <iostream>
#include "stack.h"


int main() {
	MinStack s;
	s.push(2);
    cout<<s.min()<<endl;
    s.push(3);
    cout<<s.min()<<endl;
    s.push(1);
    cout<<s.min()<<endl;
    s.pop();
    cout<<s.min()<<endl;
    return 0;
}
