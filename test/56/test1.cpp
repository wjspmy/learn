/*************************************************************************
    > File Name: test1.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月02日 星期日 22时18分56秒
 ************************************************************************/

#include <iostream>

class A {
public :
    virtual void fun(int number = 10) {
        std::cout << "A::Fun with number " << number << std::endl;
    }
};

class B : public A {
public :
    virtual void fun(int number = 20) {
        std::cout << "B::Fun with number " << number << std::endl;
    }
};

int main() {
    B b;
    A& a = b;

    a.fun();

    return 0;
}
/*
 由于 a 是一个指向 B 实例的引用，因此在运行的时候 会调用 B::Fun。但缺省参数是在编译期决定的。
 在编译的时候，编译器只知道 a 是一个类型 a 的引用，具体指向什么类型在编译期是不能确定的，
 因此会按照 A::Fun 的声明把缺省 参数 number 设为 10。
*/
