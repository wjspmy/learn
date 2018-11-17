/*************************************************************************
    > File Name: max_number.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月16日 星期五 23时57分37秒
 ************************************************************************/

#include <iostream>
#include "max_number.h"

//方法一
void max_num(int32_t num) {
    for (int32_t i = 1; i < pow(10, num); ++i) {
        std::cout << i << '\t';
        if (i % 10 == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}


//方法二
bool increment (char* number) {
	bool sign = false; 
	int32_t nTakeOver = 0;
	int32_t length = strlen(number); //字符数组number的长度 

	for (int32_t i = length - 1; i >= 0; i --) {
		int32_t sum = number[i] - '0' + nTakeOver; 
		if (i == length - 1) {
			++sum;
        }
		if (sum >= 10) {
			if (i == 0) {
				sign = true; 
			} else {
				sum -= 10;
				nTakeOver = 1;
				number[i] = '0' + sum;
			}
		} else {
			number[i] = '0' + sum; 
            break;
		}
	}
	
	return sign;
}
 

void print_number(char* number) {
	bool sign = true;
	int32_t length = strlen(number);
	
	for (int32_t i = 0; i < length; ++i) {
		if (sign && number[i] != '0') {
			sign = false;
		}
	
		if(!sign) {
            std::cout << number[i];
		}
	}

    std::cout << '\t';
}

void max_num_2(int32_t n) { // n = 2  
	if(n <= 0) {
		return;
	}
	
    char* number = new char[n + 1]; // 字符串长度为2 
	memset(number, '0', n);//将字符串中的每个字符初始化为0 
	number[n] = '\0';
	 
	while(!increment(number)) {
		print_number(number);
	}
    delete[] number;
}
