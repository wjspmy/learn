/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月30日 星期五 23时28分50秒
 ************************************************************************/

#include <iostream>
#include "matrix.h"

int32_t main() {
    clock_t start = clock();
    int32_t size = 0;
    std::cout << "Please input the size of matrix: ";
    std::cin >> size;
    int32_t** a = new int32_t*[size];
    for (int32_t i = 0; i < size; ++i) {
        a[i] = new int32_t[size];
    }

    std::cout << "Please input the matrix:\n";
    for (int32_t i = 0; i < size; ++i) {
        for (int32_t j = 0; j < size; ++j) {
            std::cin >> a[i][j];
        }
    }
    matrix(a, size); 
    std::cout << std::endl;
    clock_t end = clock();
    std::cout << "Time: " << end - start << '/'
        << CLOCKS_PER_SEC << 's' << std::endl;

    return 0;
    
}
