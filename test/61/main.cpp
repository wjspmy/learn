/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月06日 星期四 23时08分30秒
 ************************************************************************/

#include <iostream>
#include "max_diff.h"

int32_t main() {
    
    int32_t a[] = {2, 4, 1, 16, 7, 5, 11, 9};
    int32_t len = sizeof(a) / sizeof(int32_t);

    //方法一
    clock_t start = clock();
    std::cout << "solution_1: " << 
        solution_1(a, len) << '\t';
    clock_t end = clock();
    std::cout << "Time: " << end - start << '/' 
        << CLOCKS_PER_SEC << " s\n";

    //方法二
    start = clock();
    std::cout << "solution_2: "
        << solution_2_1(a, len) << '\t';
    end = clock();
    std::cout << "Time: " << end - start << '/' 
        << CLOCKS_PER_SEC << " s\n";

    //方法三
    start = clock();
    std::cout << "solution_3: "
        << solution_3(a, len) << '\t';
    end = clock();
    std::cout << "Time: " << end - start << '/'
        << CLOCKS_PER_SEC << " s\n";

    return 0;
}
