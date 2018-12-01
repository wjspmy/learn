/*************************************************************************
    > File Name: test3.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月01日 星期六 16时25分04秒
 ************************************************************************/

#include <iostream>

class A {
private :
    int m_value;
public:
    A(int value) {
        m_value = value;
    }
    void print_1() {
        std::cout << "hello world\n";
    }
    void print_2() {
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
 答案是Print1调用正常，打印出hello world，但运行至Print2时，程序崩溃。调用Print1时，并不需要pA的地址，因为Print1的函数地址是固定的。编译器会给Print1传入一个this指针，该指针为 NULL，但在 Print1 中该 this 指针并没有用到。只要程序运行时没有访问不该访问的内存就不会出错，因此运行正常。在运行 print2 时，需要 this 指针才能 得到m_value的值。由于此时 this 指针为 NULL，因此程序崩溃了。
*/

