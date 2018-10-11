/*************************************************************************
    > File Name: sum.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月05日 星期五 23时00分36秒
 ************************************************************************/

#ifndef _LEARN_TEST_8_SUM_H_
#define _LEARN_TEST_8_SUM_H_

class DataSum {
public:
    DataSum() {
        ++num;
        sum += num;
    }
    static void reset() {
        num = 0;
        sum = 0;

    }
    static unsigned int get_sum() {
        return sum;
    }
private :
    static unsigned int num;
    static unsigned int sum;
};

unsigned int sum_solution(unsigned int n);

#endif
