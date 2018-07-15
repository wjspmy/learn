/*************************************************************************
    > File Name: insertion_sort.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年07月14日 星期六 20时53分55秒
 ************************************************************************/

#include <iostream>

void insert(int* a,int len) {
    int key = 0;
    for (int j = 1; j < len; ++j) {
        key = a[j];
        int i = j - 1;
        while (i >= 0 && a[i] > key) {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key;
    }
}

int main() {
    int len = 0;
    std::cin >> len;
    int a[len];
    for (int i = 0; i < len; ++i) {
        std::cin >> a[i];
    }
    insert(a,len);
    for (int i = 0; i < len; ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}
