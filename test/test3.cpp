/*************************************************************************
    > File Name: test3.cpp
    > Author: 潘梦园
    > brief:  求子数组的最大和 题目：输入一个整形数组，数组里有正数也有负数。数组中连续的一个或多个整数组成一个子数组，每个 子数组都有一个和。求所有子数组的和的最大值。要求时间复杂度为 O(n)。
    > Created Time: 2018年09月15日 星期六 23时59分54秒
 ************************************************************************/

#include <iostream>

int sum_max(int a[], int size) {
    int sum = 0;
    int maxsum = 0;
    for (int i = 0; i < size; ++i) {
        sum += a[i];
        if (sum < 0) {
            sum = 0;
        }
        if (sum > maxsum) {
            maxsum = sum;
        }
    }
    if (maxsum == 0) {
        maxsum = a[0];
        for (int i = 1; i < size; ++i) {
            if (maxsum < a[i]) {
                maxsum = a[i];
            }
        }
    }
    return maxsum;
}

int main() {
	int a[10] = {1, -2, 3, 10, -4, 7, 2, -5};
	std::cout << sum_max(a,10) << std::endl;
	return 0;
}
