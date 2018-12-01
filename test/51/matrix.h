/*************************************************************************
    > File Name: matrix.h
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年11月30日 星期五 23时27分55秒
 ************************************************************************/

#ifndef _LEARN_TEST_51_MATRIX_H_
#define _LEARN_TEST_51_MATRIX_H_

#include <stdint.h>


void solution(int32_t** a, int32_t size);

void left_to_right(int32_t** a, int32_t startY, int32_t startX, int32_t endX);

void up_to_down(int32_t** a, int32_t endX, int32_t startY, int32_t endY);

void right_to_left(int32_t** a, int32_t endY, int32_t endX, int32_t startX);

void down_to_up(int32_t** a, int32_t startX, int32_t endY, int32_t startY);

void solution(int32_t** a, int32_t size, int32_t startX, int32_t startY);

void matrix(int32_t** a, int32_t size);

#endif
