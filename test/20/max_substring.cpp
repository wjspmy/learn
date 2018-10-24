/*************************************************************************
    > File Name: max_substring.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月19日 星期五 22时58分02秒
 ************************************************************************/

#include <iostream>
#include "max_substring.h"

int32_t max_substring(char* c1, char* c2) {
	if (c1 == NULL || c2 == NULL) {
        return 0;
    }

    int32_t len1 = strlen(c1);
    int32_t len2 = strlen(c2);

    int buf[len1 + 1][len2 + 1];
    memset(buf, 0, sizeof(buf));

    for(int32_t i = 1; i < len1 + 1; ++i) {
        for (int32_t j = 1; j < len2 + 1; ++j) {
            if (c1[i - 1] == c2[j - 1]) {
                buf[i][j] = buf[i - 1][j - 1] + 1;
            } else if (buf[i - 1][j] > buf[i][j - 1]){
                buf[i][j] =buf[i - 1][j];
            } else {
                buf[i][j] = buf[i][j - 1];
            }
        }
    }

    int32_t i = len1;
    int32_t j = len2;
    std::stack<char> temp;
    while (i > 0 && j > 0) {
        if (c1[i - 1] == c2[j - 1]) {
            temp.push(c1[i - 1]);
            --i;
            --j;
        } else if (buf[i - 1][j] > buf[i][j - 1]) {
            --i;
        } else {
            --j;
        }
    }

    while (!temp.empty()) {
        std::cout << temp.top() << ' ';
        temp.pop();
    }
    std::cout << std::endl;

    return buf[len1][len2];
    
}

