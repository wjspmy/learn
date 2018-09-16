/*************************************************************************
    > File Name: test5.cpp
    > Author: 潘梦园
    > brief:  查找最小的 k 个元素 题目：输入 n 个整数，输出其中最小的 k 个。
    > Created Time: 2018年09月16日 星期日 18时02分31秒
 ************************************************************************/

#include <iostream> 

const int MAX = 100;

int main() {
	int a[MAX];
	int n;
	std::cout << "Please input the value of N:";
	std::cin >> n;
	std::cout << "Please input the value of arrays:";
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = i; j < n; ++j) {
			if (a[i] > a[j]) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	std::cout << "Please input the value of K:";
	int k;
	std::cin >> k;
	for (int i = 0; i < k; ++i) {
		std::cout << a[i] << '\t';
	}
	std::cout << std::endl;
	return 0;
}
