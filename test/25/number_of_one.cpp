/*************************************************************************
    > File Name: number_of_one.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月27日 星期六 19时36分28秒
 ************************************************************************/

#include <iostream>
#include "number_of_one.h"

//判断从1到n中1出现的个数
int32_t solution(int32_t num) {
    int32_t count = 0;  //计数器
    for (int32_t i = 1; i <= num; ++i) {
        int32_t t = i;
        while (t) {
            if (t % 10 == 1) {
                ++count;
            }
            t /= 10;
        }
    }
    return count;
}
