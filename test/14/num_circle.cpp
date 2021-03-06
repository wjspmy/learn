/*************************************************************************
    > File Name: num_circle.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月13日 星期六 11时16分55秒
 ************************************************************************/

#include <iostream>
#include "num_circle.h"

//n个数字（0,1,…,n-1）形成一个圆圈，从数字0开始， 
//每次从这个圆圈中删除第m个数字（第一个为当前数字本身，第二个为当前数字的下一个数字）。 
//当一个数字删除后，从被删除数字的下一个继续删除第m个数字。 
//求出在这个圆圈中剩下的最后一个数字。 


int32_t last_num(int32_t n, int32_t m) {
    int32_t last = 0;
    for (int32_t i = 2; i <= n; ++i) {
        last = (last + m) % i;
    }
    return last;
}

