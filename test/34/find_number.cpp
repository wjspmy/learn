/*************************************************************************
    > File Name: find_number.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月11日 星期日 21时12分42秒
 ************************************************************************/

#include <iostream>
#include "find_number.h"


//找出数组中只出现一次的2个数字
int32_t find_bit(int32_t num){
	int32_t indexBit = 0;
	while (((num & 1) == 0) && (indexBit < 32)) {
		num = num >> 1;
		++indexBit;
	}
	return indexBit;
}

bool is_bit(int32_t num, int32_t index) {
    num = num >> index;
    return (num & 1);
}


void find(int32_t* a, int32_t len) {
    if (len < 2) {
        return;
    }

    int32_t r = 0;
    int32_t n1 = 0;
    int32_t n2 = 0;
    
    for (int32_t i = 0; i < len; ++i) {
        r ^= a[i];
    }

    

    int32_t index = find_bit(r);
    for (int32_t i = 0; i < len; ++i) {
        if (is_bit(a[i], index)) {
            n1 ^= a[i];
        } else {
            n2 ^= a[i];
        }
    }

   std::cout << n1 << " " 
       << n2 << std::endl;
}
