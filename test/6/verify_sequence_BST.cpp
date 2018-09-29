/*************************************************************************
    > File Name: verify_sequence_BST.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年09月29日 星期六 18时47分24秒
 ************************************************************************/

#include <iostream>
#include "verify_sequence_BST.h"

bool Verify(int32_t* a, int32_t length) {
    if (a == NULL || length < 0) {
        return false;
    }
    int32_t root = a[length - 1];
    int32_t i = 0;
    for (; i < length - 1; ++i) {
        if (root < a[i]) {
            break;
        }
    }
    int32_t j = i;
    for (; j < length - 1; ++ j) {
        if (root > a[j]) {
            return false;
        }
    }

    bool left = true;
    if (i > 0) {
        left = Verify(a, i);
    }
    bool right = true;
    if (i > length) {
        right = Verify(a + i, length - i - 1);
    }
    return (left && right);
}
