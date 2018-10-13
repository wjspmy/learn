/*************************************************************************
    > File Name: fibonacci.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月13日 星期六 17时13分12秒
 ************************************************************************/

#include <iostream>
#include "fibonacci.h"


//递归实现
int32_t fibonacci_1(int32_t n) {
    if (n == 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return fibonacci_1(n - 1) + fibonacci_1(n - 2);
    }
}


//复杂度为O(n)
int32_t fibonacci_2(int32_t n) {
    int32_t array[n];
    array[0] = 0;
    array[1] = 1;
    for (int32_t i = 2; i <= n; ++i) {
        array[i] = array[i - 1] + array[i - 2];
    }
    return array[n];
}

int32_t pow(int32_t *a, int32_t* b) {

}

int32_t fibonacci_3(int32_t n) {
    int a[2][2] = {{1, 1}, {1, 0}};

}

