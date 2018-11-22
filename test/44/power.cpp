/*************************************************************************
    > File Name: power.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月22日 星期四 17时14分16秒
 ************************************************************************/

#include <iostream>
#include "power.h"

double power(double base, int32_t exponent) {
    double result = 1.0;
    if (exponent > 0) {
        for (int32_t i = 1; i <= exponent; ++i) {
            result *= base;
        }

    } else if (exponent < 0) {
        int32_t sign = -1;
        exponent = exponent * sign;
        for (int32_t i = 1; i <= exponent; ++i) {
            result *= base;
        }
        result = 1 / result;
    }

    return result;
}
