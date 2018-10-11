/*************************************************************************
    > File Name: sum.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月05日 星期五 23时00分36秒
 ************************************************************************/

#include <iostream>
#include "sum.h"

unsigned int DataSum::num = 0;
unsigned int DataSum::sum = 0;

unsigned int sum_solution(unsigned int n) {
    DataSum::reset();
	DataSum* a = new DataSum[n];
	delete[]a;
	a = NULL;
	return DataSum::get_sum();
}
