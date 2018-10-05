/*************************************************************************
    > File Name: reverse.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月05日 星期五 16时00分07秒
 ************************************************************************/

#include <iostream>
#include "reverse.h"

void reverse(char* start, char* end) {
    if (start == NULL || end == NULL) {
        return;
    }

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }
}


char* reverse_sentence(char* sentence) {
    if (sentence == NULL) {
        return NULL;
    }
    char* start = sentence;
    char* end = sentence;

    while (*end != '\0') {
        ++end;
    }
    --end;

    reverse(start, end);

    start = end = sentence;
    while (*start != '\0') {
        if (*start == ' ') {
            ++start;
            ++end;
            continue;
        } else if (*end == ' ' || *end == '\0') {
            reverse(start, --end);
            start = ++end;
        } else {
            ++end;
        }
    }
    return sentence;
}
