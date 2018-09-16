/*************************************************************************
    > File Name: test2.cpp
    > Author: 潘梦园
    > brief:  设计包含 min 函数的栈 题目：定义栈的数据结构，要求添加一个 min 函数，能够得到栈的最小元素。要求函数 min、push 以及 pop 的时间复杂度都是 O(1)。    > Created Time: 2018年09月14日 星期五 21时33分01秒
 ************************************************************************/

#include <iostream>
#include <cstdlib>

const int MAX = 100;

struct Stack {
    int data[MAX];
    int top;
    int min;
};

void init(Stack* s) {
    s->min = -1;
    s->top = -1;
}

void push(Stack* s, int value) {
    if (s->top >= MAX - 1) {
        std::cout << "The stack is full!\n";
        exit(1);
    }
    if (s->top == -1 || s->min > value) {
        s->min = value;
    }
    s->top++;
    s->data[s->top] = value;
}

int pop(Stack* s) {
    int data;
    if (s->top == -1) {
        std::cout << "The stack is empty!\n";
        exit(1);
    }
    return s->data[s->top--];
}

int Stack_min(Stack* s) {
    return s->min;
}

int main() {
    Stack s;
    init(&s);
    push(&s, 3);
    std::cout << Stack_min(&s) << '\n';
    push(&s, 4);
    std::cout << Stack_min(&s) << '\n';
    push(&s, 2);
    std::cout << Stack_min(&s) << '\n';
    return 0;
}
