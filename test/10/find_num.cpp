/*************************************************************************
    > File Name: find_num.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月11日 星期四 18时50分30秒
 ************************************************************************/

#include <iostream>
#include "find_num.h"


//在数组中查找两个数,使得它们的和正好是输入的那个数字
bool find_num(int32_t* array, int32_t length, int32_t k) {
    int32_t i = 0;
    int32_t j = length - 1;
    while (i < j) {
        if (array[i] + array[j] < k) {
            ++i;
        } else if (array[i] + array[j] > k) {
            --j;
        } else {
            std::cout << array[i] << '\t' << array[j] << std::endl;
            return true;
        }
    }
    return false;
}


