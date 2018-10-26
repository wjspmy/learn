/*************************************************************************
    > File Name: jump_step.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月26日 星期五 21时55分00秒
 ************************************************************************/

#include <iostream>
#include "jump_step.h"


//递归实现
int32_t solution_1(int32_t n) {
    assert(n > 0);

    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return solution_1(n - 1) + solution_1(n - 2);
    }
}

//用数组实现
int32_t solution_2(int32_t n) {
    assert(n > 0);

    int32_t a[n + 1];
    a[0] = 0;
    a[1] = 1;
    a[2] = 2;

    if (n > 2) {
        for(int32_t i = 3; i <= n; ++i) {
            a[i] = a[i - 1] + a[i - 2];
        }
    }

    return a[n];
}

//动态规划实现
int32_t solution_3(int32_t n) {
    assert(n > 0);

    int32_t p = 1;
    int32_t q = 2;
    int32_t sum = 0;

    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {

        while (n-- > 2) {
            sum = p + q;
            p = q;
            q = sum;
        }
        return sum;
    }
    

}

