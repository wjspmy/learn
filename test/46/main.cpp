/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月23日 星期五 21时45分05秒
 ************************************************************************/

#include <iostream>
#include "symmetric.h"

int32_t main() {
    char a[MAX];

    std::cout << "Please input the string: ";
    std::cin >> a;

    std::cout << "最大对称子串的长度为:\n";

    std::cout << "方法一：";
    std::cout << solution_1(a) << std::endl;

    std::cout << "方法二：";
    std::cout << solution_2(a) << std::endl;
    return 0;
}
