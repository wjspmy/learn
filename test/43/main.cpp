/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月21日 星期三 23时59分04秒
 ************************************************************************/

#include <iostream>
#include "dice.h"

int32_t main() {
    int32_t num;
    std::cout << "Please input the value of num:";
    std::cin >> num;

    std::cout << "方法一(递归)：\n";
    print_dice_1(num);

    std::cout << "方法二(动态规划)：\n";
    print_dice_2(num);

    return 0;
}
