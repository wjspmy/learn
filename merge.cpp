/*************************************************************************
    > File Name: merge.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年07月15日 星期日 22时35分50秒
 ************************************************************************/
#include<iostream>

void merge(int* a, int p, int q, int r) {//   0 3 7
    int n1 = q - p + 1; // 3 - 0 + 1 =4
    int n2 = r - q; // 7 - 3 = 4
    int l[n1];
    int rr[n2];
    for (int i = 0; i < n1; ++i) {
        l[i] = a[i];
    }
    for (int i = 0; i < n2; ++i) {
        rr[i] = a[q + 1 + i];
    }
//    l[n1] = -1;
//    rr[n2] = -1;
    int i = 0;
    int j = 0;
    // 1  3  5  7 
    // 2   4  6  8
    for (int k = p; k < r; ++k) {
        if (l[i] <= rr[j]) {
            a[k] = l[i];
            i++;
        } else {
            a[k] = rr[j];
            ++j;
        }
    }
}

void merge_sort (int* a, int p, int r) { //   0 7
    if (p >= r) {
        return;
    }
    int q = (p + r) / 2;  // 3
    merge_sort(a, p, q);  // 0  3  
    merge_sort(a, q + 1, r); // 4 7
    merge(a, p, q, r); // 0 3 7
}

int main() {
    int a[8] = {1,3,5,7,2,4,6,8};
    for (int i= 0; i < 8; ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';
    merge_sort(a, 0, 7);
    for (int i= 0; i < 8; ++i) {
        std::cout << a[i] << ' ';
    }
    return 0;
}
