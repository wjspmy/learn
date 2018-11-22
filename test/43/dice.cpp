/*************************************************************************
    > File Name: dice.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月21日 星期三 23时59分04秒
 ************************************************************************/

#include <iostream>
#include "dice.h"


//递归
void dice_1(int32_t n, int32_t left, int32_t sum, int32_t* a) {
    if (left == 0) {
        ++(a[sum]);
        return;
    }
    for(int32_t i = 1; i <= 6; ++i) {
        dice_1(n, left - 1, sum + i, a);
    }
}

void print_dice_1(int32_t num) {
    int32_t len = num * 6 + 1;
    int32_t a[len] = {0};

    dice_1(num, num, 0, a);

    for (int32_t i = num; i < len; ++i) {
        std::cout<< "sum = " << i << " , rate = "
            << a[i] << "/" << pow(6, num) << std::endl;
    }
}

//动态规划
int32_t dice_2(int32_t num, int32_t s) {
    if (num == 1) {
        return (s > 0 && s <= 6) ? 1 : 0;
    }
    if (num == s) {
        return 1;
    }
    if (num > s) {
        return 0;
    }
    int32_t sum = 0;
    for (int32_t i = 1; i <= 6; ++i) {
        sum += dice_2(num - 1, s - i);
    }
    return sum;
}

void print_dice_2(int32_t num) {
    for (int32_t i = num; i < num * 6 + 1; ++i) {
        std::cout << "sum = " << i << ", rate = " 
            << dice_2(num, i) << "/" << pow(6, num) 
            << std::endl;
    }
}

