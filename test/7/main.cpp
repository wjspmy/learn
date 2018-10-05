/*************************************************************************
    > File Name: main.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年10月05日 星期五 16时00分07秒
 ************************************************************************/

#include <iostream>
#include "reverse.h"

using namespace std;

int main() {
    char* sentence;
    cin.get(sentence, 50);
    std::cout << "反转前：" << sentence << std::endl;
    sentence = reverse_sentence(sentence);
    std::cout << "反转后：" << sentence << std::endl;
}
