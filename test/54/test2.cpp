/*************************************************************************
    > File Name: test2.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月01日 星期六 20时27分28秒
 ************************************************************************/

#include <iostream>

class A {
private:
    int value;
public:
    A(int n ) {
        value = n;
    }
    A(const A &other) {
        value = other.value;
    }
    void print() {
        std::cout << value << std::endl;
    }
};

int main() {
    A a = 10;
    A b = a;
    b.print();

    return 0;
}


/*
  在复制构造函数中传入的参数是A的一个实例。由于是传值，把形参拷贝到实参会调用复制构造函数。
  因此如果允许复制构造函数传值，那么会形成永无休止的递 归并造成栈溢出。
  因此 C++的标准不允许复制构造函数传值参数，而必须是传引用或者常量引用。
*/
