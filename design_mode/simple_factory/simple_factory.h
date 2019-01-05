/*************************************************************************
	> File Name: simple_factory.h
	> Author: wjspmy
	> Mail: 
	> Created Time: 2019年01月05日 星期六 18时16分55秒
 ************************************************************************/

#ifndef _SIMPLE_FACTORY_H
#define _SIMPLE_FACTORY_H

#include <iostream>
#include <stdint.h>

class Operation 
{
public :
    void set_numberA(int32_t numberA) 
    {
        this->numberA = numberA;
    }
    int32_t get_numberA() 
    {
        return numberA;
    }
    void set_numberB(int32_t numberB) 
    {
        this->numberB = numberB;
    }
    int32_t get_numberB() 
    {
        return numberB;
    }
    virtual int32_t get_result() 
    {
        int32_t result = 0;
        return result;
    }

private :
    int32_t numberA;
    int32_t numberB;
};

class OperationAdd : public Operation
{
public:
    int32_t get_result() 
    {
        int32_t result = 0;
        result = get_numberA() + get_numberB();
        return result;
    }
};

class OperationSub : public Operation
{
public :
    int32_t get_result() 
    {
        int32_t result = get_numberA() - get_numberB();
        return result;
    }
};

class OperationMul : public Operation 
{
public :
    int32_t get_result()
    {
        int32_t result = get_numberA() * get_numberB();
        return result;
    }
};

class OperationDiv : public Operation 
{
public :
    int32_t get_result() 
    {
        if (get_numberB() == 0) {
            std::cout << "除数不能为0\n";
            return 0;
        }
        int32_t result = get_numberA() / get_numberB();
        return result;
    }
};

class simpleFactory
{
public :
    Operation* createOperate(char operate)
    {
        Operation* oper = NULL;
        switch (operate)
        {
            case '+' :
                oper = new OperationAdd();
                break;
            case '-' :
                oper = new OperationSub();
                break;
            case '*' :
                oper = new OperationMul();
                break;
            case '/' :
                oper = new OperationDiv();
                break;
        }
        return oper;
    }
};
#endif
