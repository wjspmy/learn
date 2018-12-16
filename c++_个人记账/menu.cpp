/*************************************************************************
    > File Name: menu.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月16日 星期日 20时31分51秒
 ************************************************************************/

#include <iostream>

void menu_1() {
    std::cout << "\t\t\t ------------------------------- \n";
    std::cout << "\t\t\t|         个人记账系统          |\n";
    std::cout << "\t\t\t ------------------------------- \n";
    std::cout << "\t\t\t|                               |\n";
    std::cout << "\t\t\t|           1.登录              |\n";
    std::cout << "\t\t\t|           2.注册              |\n";
    std::cout << "\t\t\t|           3.退出              |\n";
    std::cout << "\t\t\t|                               |\n";
    std::cout << "\t\t\t ------------------------------- \n";
}

void menu_2() {
    std::cout << "\t\t\t ------------------------------- \n";
    std::cout << "\t\t\t|         个人记账系统          |\n";
    std::cout << "\t\t\t ------------------------------- \n";
    std::cout << "\t\t\t|           1.记账              |\n";
    std::cout << "\t\t\t|           2.查询账单          |\n";
    std::cout << "\t\t\t|           3.删除账单          |\n";
    std::cout << "\t\t\t|           4.退出              |\n";
    std::cout << "\t\t\t|                               |\n";
    std::cout << "\t\t\t ------------------------------- \n";
}

void menu_3() {
    std::cout << "\t\t\t ------------------------------- \n";
    std::cout << "\t\t\t|         个人记账系统          |\n";
    std::cout << "\t\t\t ------------------------------- \n";
    std::cout << "\t\t\t|        是否返回主菜单？       |\n";
    std::cout << "\t\t\t|         1.返回主菜单          |\n";
    std::cout << "\t\t\t|         2.取消                |\n";
    std::cout << "\t\t\t|                               |\n";
    std::cout << "\t\t\t ------------------------------- \n";
}

bool load()
int main() {
    menu_1();
    menu_2();
    menu_3();

    return 0;
}
