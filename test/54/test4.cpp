/*************************************************************************
    > File Name: test4.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月02日 星期日 13时30分23秒
 ************************************************************************/

#include <iostream>

class A {
public :
    A() {
        std::cout << "A is creat!\n";
    }
    ~A() {
        std::cout << "A is delete!\n";
    }
};

class B : public A {
public :
    B() {
        std::cout << "B is creat!\n";
    }
    ~B() {
        std::cout << "B is delete!\n";
    }
};

int main() {
    A* a = new B();

    delete a;

    return 0;
}

/*
 用 new 创建 B 时，回调用 B 的构造函数。在调用 B 的构造函数的时候，会先调用 A 的构造函数。因此先输出 A is created. B is created.

 接下来运行 delete 语句时，会调用析构函数。由于 pA 被声明成类型 A 的指针，同时基类 A的析构函数没有标上 virtual，
 因此只有 A 的析构函数被调用到，而不会调用 B 的析构函数。

 由于 pA 实际上是指向一个 B 的实例的指针，但在析构的时候只调用了基类 A 的析构函 数，却没有调用 B 的析构函数。
 这就是一个问题。如果在类型 B 中创建了一些资源，比 如文件句柄、内存等，在这种情况下都得不到释放，从而导致资源泄漏。
*/
