/*************************************************************************
    > File Name: matrix.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月30日 星期五 23时28分50秒
 ************************************************************************/

#include <iostream>
#include "matrix.h"

//从左到右
void left_to_right(int32_t** a, int32_t startX, int32_t startY, int32_t endX) {
    for (int32_t i = startX; i <= endX; ++i) {
        std::cout << a[startY][i] << ' ';
    }
}

//从上到下
void up_to_down(int32_t** a, int32_t endX, int32_t startY, int32_t endY) {
    for (int32_t i = startY; i <= endY; ++i) {
        std::cout << a[i][endX] << ' ';
    }
}

//从右到左
void right_to_left(int32_t** a, int32_t endY, int32_t endX, int32_t startX) {
    for (int32_t i = endX; i >= startX; --i) {
        std::cout << a[endY][i] << ' ';
    }
}

//从下到上
void down_to_up(int32_t** a, int32_t startX, int32_t endY, int32_t startY) {
    for (int32_t i = endY; i >= startY; --i) {
        std::cout << a[i][startX] << ' ';
    }
}


void solution(int32_t** a, int32_t size, int32_t startX, int32_t startY) {
    int32_t endX = size - 1 - startX;
    int32_t endY = size - 1 - startY;
    left_to_right(a, startY, startX, endX);
    if (startY < endY) {
        up_to_down(a, endX, startY + 1, endY);
    }
    if (startX < endX && startY < endY) {
        right_to_left(a, endY, endX - 1, startX);
    }
    if (startX < endX && startY < endY - 1) {
        down_to_up(a,  startX, endY - 1, startY + 1);
    }
}

void matrix(int32_t** a, int32_t size) {
    int32_t startX = 0;
    int32_t startY = 0;
    while (startX * 2 < size && startY * 2 < size) {
        solution(a, size, startX, startY);
        ++startX;
        ++startY;
    }

}

