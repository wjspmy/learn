/*************************************************************************
    > File Name: sort_age.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月03日 星期一 22时24分03秒
 ************************************************************************/

#include <iostream>
#include "sort_age.h"

/*
某公司有几万名员工，请完成一个时间复杂度为 O(n)的算法对该公司员工的年龄作 排序，可使用 O(1)的辅助空间
*/
void sort(int32_t* age, int32_t length) {
    int32_t a[MAX_AGE] = {0};

    for(int32_t i = 0; i < length; ++i) {
        ++a[age[i]];
    }
    for (int32_t i = 0; i < MAX_AGE; ++i) {
        while (a[i] != 0) {
            std::cout << i  << ' ';
            --a[i];
        }
    }
}
