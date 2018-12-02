/*************************************************************************
    > File Name: test3.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月02日 星期日 10时59分40秒
 ************************************************************************/

#include <iostream>
#include <stdint.h>

int Sizeof(char a[]) {
    return sizeof(a);
}
int main() {
    char* p = "goole";
    int32_t size1 = sizeof(p);
    int32_t size2 = sizeof(*p);
    std::cout << size1 << '\t' << size2 << std::endl;

    char a[100] = "goole";
    int32_t size3 = sizeof(a);
    int32_t size4 = Sizeof(a);

    std::cout << size3 << '\t' << size4 << std::endl;
    return 0;

/*
 pString1 是一个指针。在 32 位机器上，任意指针都占 4 个字节的空间。
 *pString1 是字符串 pString1 的第一个字符。一个字符占一个字节。pString2 是一个数组， 
 sizeof(pString2)是求数组的大小。这个数组包含 100 个字符，因此大小是 100 个字节。而
 在函数 SizeOf 中，虽然传入的参数是一个字符数组，当数组作为函数的参数进行传递时， 
 数组就自动退化为同类型的指针。因此 size4 也是一个指针的大小，为 4。
 */

}
