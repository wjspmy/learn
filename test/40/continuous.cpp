/*************************************************************************
    > File Name: continuous.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月18日 星期日 21时15分58秒
 ************************************************************************/

#include <iostream>
#include "continuous.h"

bool continuous(std::vector<int32_t> number, int32_t max) {
    if (number.size() == 0 || max <= 0) {
        return false;
    }
    std::sort(number.begin(), number.end());
    int32_t number_of_zero = 0;
    int32_t number_of_gap = 0;
    std::vector<int32_t>::iterator small = number.begin();
    while (small != number.end() && *small == 0) {
        ++number_of_zero;
        ++small;
    }

    std::vector<int32_t>::iterator bigger = small + 1;

    while (bigger < number.end()) {
        if (*bigger == *small) {
            return false;
        }
        number_of_gap +=*bigger - *small - 1;
        small = bigger;
        ++bigger;
    }
    return (number_of_gap > number_of_zero) ? false : true;
}
