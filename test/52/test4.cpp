/*************************************************************************
    > File Name: test4.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月01日 星期六 16时37分10秒
 ************************************************************************/

#include <iostream>
class A {
private:
    int m_value;
public:
    A(int value) {
        m_value = value;
    }
    void print_1() {
        std::cout << "Hello, world\n";
    }
    virtual void print_2() {
        std::cout << m_value << std::endl;
    }
};

int main() {
    A* a = NULL;
    a->print_1();
    a->print_2();
    return 0;
}

/*
 由于 Print2 是虚函数。C++调用虚函数的时候， 要根据实例（即 this 指针指向的实例）中虚函数表指针得到虚函数表，
 再从虚函数表中找到函数的地址。由于这一步需要访问实例的地址（即 this 指针），而此时 this 指针为空指针， 因此导致内存访问出错。
*/
