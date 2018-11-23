/*************************************************************************
    > File Name: symmertric.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月23日 星期五 21时45分05秒
 ************************************************************************/

#include <iostream>
#include "symmetric.h"

//方法一 O(n^3)
bool is_symmetric(char* begin, char* end) {
    if (begin == NULL || end == NULL
            || begin > end) {
        return false;
    }
    while (begin <= end) {
        if (*begin != *end) {
            return false;
        }
        ++begin;
        --end;
    }
    return true;
}

int32_t solution_1(char* a) {
    if (a == NULL) {
        return 0;
    }
    int32_t max = 1;
    char* first = a;
    int32_t length = strlen(a);

    while (first < &a[length - 1]) {
        char* last = first + 1;
        while (last <= &a[length - 1]) {
            if (is_symmetric(first, last)) {
                int32_t new_max = last - first + 1;
                if (new_max > max) {
                    max = new_max;
                }
            }
            ++last;
        }
        ++first;
    }
    return max;
}

//方法二  O(n^2)
int32_t solution_2(char* a) {
    if (a == NULL) {
        return 0;
    }
    int32_t max = 1;
    char* p = a;
    while (*p != '\0') {
        char* first = p - 1;
        char* last = p + 1;
        while (first >= a && *last != '\0' && *first == *last) {
            ++last;
            --first;
        }
        int32_t new_max = last - first - 1;
        if (new_max > max) {
            max = new_max;
        }
        first = p;
        last = p + 1;
        while (first >= a && *last != '\0' && *first ==*last) {
            ++last;
            --first;
        }
        new_max = last - first - 1;
        if (new_max > max) {
            max = new_max;
        }
        ++p;
    }
    return max;
}
