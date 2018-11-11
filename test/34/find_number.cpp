/*************************************************************************
    > File Name: find_number.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月11日 星期日 21时12分42秒
 ************************************************************************/

#include <iostream>
#include "find_number.h"

int FindFirstBitIs1(int num){
	int indexBit = 0;
	while (((num & 1) == 0) && (indexBit < 32)) {
		num = num >> 1;
		++ indexBit;
	}
	return indexBit;
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

    


   int32_t count = 1;
   while (true) {
       if ((r & 1) == 1) {
           break;
       }
       r >>= 1;
       count <<= 1;
   }

   for (int32_t i = 0; i < len; ++i) {
       if ((a[i] ^ count) == 0) {
           n1 ^= a[i];
       } else {
           n2 ^= a[i];
       }
   }
   std::cout << n1 << std::endl 
       << n2 << std::endl;
}
