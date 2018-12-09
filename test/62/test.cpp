/*************************************************************************
    > File Name: test.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月09日 星期日 22时57分46秒
 ************************************************************************/

#include <iostream>
#include <stdio.h>

bool fun1(char* s) {
    printf("%s\n", s);
    return false;
}

bool fun2(char* s) {
    printf("%s\n", s);
    return true;
}

int main() {
	bool res1, res2;
	res1 = (fun1("a") && fun2("b")) || (fun1("c") || fun2("d"));
	res2 = (fun1("a") && fun2("b")) && (fun1("c") || fun2("d"));

	return res1 || res2;
}

/*

 在 C/C++中，与、或运算是从左到右的顺序执行的。在计算 rest1 时，先计算 Fun1(“a”) && Func2(“b”)。首先 Func1(“a”)打印出内容为 a 的一行。
 由于 Fun1(“a”)返回的是 false, 无论 Func2(“b”)的返 回值是 true 还是 false，Fun1(“a”) && Func2(“b”)的结果都是 false。由于 Func2(“b”)的结果无关重要，
 因此 Func2(“b”)会略去而不做计算。接下来计算 Fun1(“c”) || Func2(“d”)，分别打印出内容 c 和 d 的两行。

 在计算 rest2 时，首先 Func1(“a”)打印出内容为 a 的一行。由于 Func1(“a”)返回 false，和前面一样的 道理，
 Func2(“b”)会略去不做计算。由于 Fun1(“a”) && Func2(“b”)的结果是 false， 不管 Fun1(“c”) && Func2(“d”)的结果是什么，
 整个表达式得到的结果都是 false，因此 Fun1(“c”) && Func2(“d”)都将被忽略。

 */
