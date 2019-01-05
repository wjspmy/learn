/*************************************************************************
	> File Name: main.cpp
	> Author: wjspmy
	> Mail: 
	> Created Time: 2019年01月05日 星期六 18时43分28秒
 ************************************************************************/

#include <iostream>
#include "simple_factory.h"

int32_t main()
{
    Operation* oper;
    simpleFactory simple;
    int32_t numberA = 0;
    int32_t numberB = 0;
    char operate;

    std::cout << "Please input the number of A : ";
    std::cin >> numberA;
    std::cout << "Please input the number of B : ";
    std::cin >> numberB;
    std::cout << "Pleas input the operate : ";
    std::cin >> operate;

    oper = simple.createOperate(operate);
    oper->set_numberA(numberA);
    oper->set_numberB(numberB);
    
    int32_t result = oper->get_result();
    std::cout << result << std::endl;
    return 0;

}

