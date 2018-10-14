/*************************************************************************
    > File Name: transformation.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月14日 星期日 20时44分38秒
 ************************************************************************/

#include <iostream>
#include "transformation.h"

int32_t transformation(std::string s) {
    
    int32_t digit = 0;
    int32_t sign = 1;

    if (s[0] == '-') {
        sign = -1;
        for (int32_t i = 1; s[i] != '\0'; ++i) {
            digit = digit * 10 + (s[i] - '0');
        }
    } else if (s[0] == '+'){
        for (int32_t i = 1; s[i] != '\0'; ++i) {
            digit = digit * 10 + (s[i] - '0');
       }
    } else if (s[0] >= '0' && s[0] <= '9') {
        for (int32_t i = 0; s[i] != '\0'; ++i) {
            digit = digit * 10 + (s[i] - '0');
        }
    } else {
        std::cout << "The string is error!\n";
        exit(1);
    }
    return digit * sign;
}
