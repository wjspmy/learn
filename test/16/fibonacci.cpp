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

//复杂度为O(logn)


int32_t** mult(int32_t** m1, int32_t** m2) {
    int32_t** res = new int32_t*[2];
    for (int32_t i = 0; i < 2; ++i) { 
		res[i] = new int32_t[2];
	}
    res[0][0] = m1[0][0] * m2[0][0] + m1[0][1] * m2[1][0];
    res[0][1] = m1[0][0] * m2[0][1] + m1[0][1] * m2[1][1];
    res[1][0] = m1[1][0] * m2[0][0] + m1[1][1] * m2[1][0];
    res[1][1] = m1[1][0] * m2[0][1] + m1[1][1] * m2[1][1];

    return res;
}

int32_t** recur(int32_t x) {
    if (x == 0) {
        int32_t** res = new int32_t*[2];
        for (int32_t i = 0; i < 2; ++i) {
			res[i] = new int32_t[2];
		}
        res[0][0] = res[1][1] = 1;
        res[0][1] = res[1][0] = 0;
        return res;
    }
    if (x == 1) {
        int32_t** res = new int32_t*[2];
        for (int32_t i = 0; i < 2; ++i) {
			res[i] = new int32_t[2];
		}
        res[0][1] = res[1][0] = res[1][1] = 1;
        res[0][0] = 0;
        return res;
    }
    int32_t** half = recur(x / 2);
    return mult(mult(half, half), recur(x % 2));
}

int32_t fibonacci_3(int32_t n) {
    if (n == 0 || n == 1) {
		return 1;
	}
    int32_t** mat = recur(n - 1);
    return mat[0][1] + mat[1][1];
}


