/*************************************************************************
    > File Name: find_min.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月28日 星期五 23时46分50秒
 ************************************************************************/

#include <iostream>
#include "find_min.h"

void HeapAdjust(int32_t* data, int32_t length, int32_t k) {
    int32_t temp = data[k];
    int32_t i = 2 * k + 1;
    while (i < length) {
        if (i + 1 < length && data[i] < data[i + 1]) {
            ++i;
        }
        if (temp > data[i]) {
            break;
        }
        data[k] = data[i];
        k = i;
        i = 2 * k + 1;
    }
	data[k] = temp;
}

void HeapSort(int32_t* data, int32_t length) {
	if (data == NULL || length <= 0) {
		return;
	}
	for (int32_t i = length / 2 - 1; i >= 0; --i) {
		HeapAdjust(data, length, i); 
	}
	for (int32_t i = length - 1; i >= 0; --i) {
		std::swap(data[0], data[i]);
		HeapAdjust(data, i, 0);
	}
}
