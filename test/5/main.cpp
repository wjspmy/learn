/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月28日 星期五 23时46分50秒
 ************************************************************************/

#include <iostream>
#include "find_min.h"

int32_t main() {
	int32_t data[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int32_t length = 8;
	HeapSort(data, length);
	for (int i = 0; i < length; ++i) {
		std::cout << data[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
