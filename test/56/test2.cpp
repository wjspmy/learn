/*************************************************************************
    > File Name: test2.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月02日 星期日 22时40分44秒
 ************************************************************************/

#include <iostream>

char* GetString1() {
    char p[] = "Hello World"; 
    return p;
}

char* GetString2() {
    char *p = "Hello World"; 
    return p;
}



int main() {
    std::cout << "GetString1 returns: " << GetString1() << std::endl; 
    std::cout << "GetString2 returns: " << GetString2() << std::endl;

    return 0;
}

