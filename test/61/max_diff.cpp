/*************************************************************************
    > File Name: max_diff.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月06日 星期四 23时08分30秒
 ************************************************************************/

#include <iostream>
#include "max_diff.h"

//暴力法 O(n^2)
int32_t solution_1(int32_t* a, int32_t len) {
    if (len < 1) {
        return 0;
    }
    int32_t max = 0;
    for (int32_t i = 0;i < len; ++i) {
        for (int32_t j = i + 1; j < len; ++j) {
            int32_t temp = a[i] - a[j];
            max = std::max(max, temp);
        }
    }
    return max;

}

//分治法 O(n)
int32_t solution_2_1(int32_t* a, int32_t len) {
    if (a == NULL || len < 2) {
        return 0;
    }
    int32_t min = 0;
    int32_t max = 0;

    return solution_2_2(a, a + len - 1, &min, &max);
}

int32_t solution_2_2(int32_t* start, int32_t* end, int32_t* min, int32_t* max) {
    if (end == start) {
        *min = *max = *start;
        return 0;
    }
    int32_t *middle = start + (end - start) / 2;
    int32_t max_left = 0;
    int32_t min_left = 0;
    int32_t left_dif = solution_2_2(start, middle, &min_left, &max_left);

    int32_t max_right = 0;
    int32_t min_right = 0;
    int32_t right_dif = solution_2_2(middle + 1, end, &min_right, &max_right);

    int32_t cross_dif = max_left - min_right;
    *max = (max_left > max_right) ? max_left : max_right;
    *min = (min_left < min_right) ? min_left : min_right;

    int32_t max_dif = (left_dif > right_dif) ? left_dif : right_dif;
    max_dif = (max_dif > cross_dif) ? max_dif : cross_dif;

    return max_dif;
}

//动态规划 O(n);
int32_t solution_3(int32_t* a, int32_t len) {
    if (a == NULL && len < 1) {
        return 0;
    }
    int32_t max = a[0];
    int32_t max_dif = max - a[1];
    for (int32_t i = 2; i < len; ++i) {
        if (a[i - 1] > max) {
            max = a[i - 1];
        }
        int32_t current_dif = max - a[i];
        if (current_dif > max_dif) {
            max_dif = current_dif;
        }
    }
    return max_dif;
}
