/*************************************************************************
    > File Name: main.cpp
    > Author: wjspmy
    > brief:  c++_记账
    > Created Time: 2018年12月19日 星期三 22时13分59秒
 ************************************************************************/

#include <iostream>
#include "tally.h"

int main() {
	Tally tally;

	
    int choose_1 = 0;
    int choose_2 = 0;
    int choose_3 = 0;
    menu_1();
    std::cout << "请输入您的操作：";
    std::cin >> choose_1;
    while (choose_1) {
        std::cout << "\n\n";
        switch (choose_1) {
            case 1: tally.pmy_login();
                    menu_2();
                    choose_2 = 0;
                    std::cout << "请选择您的操作: ";
                    std::cin >> choose_2;
                    while (choose_2) {
                        std::cout << "\n\n";
                        switch(choose_2) {
                            case 1: tally.pmy_insert(); break;
                            case 2: tally.pmy_select(); break;
                            case 3: tally.pmy_delete(); break;
                            case 4: tally.pmy_update(); break;
                            case 5: tally.pmy_quit(); break;
                            default: std::cout << "选择的操作错误!!\n";
                         }
                        std::cout << "\n\n\n\n";
                        menu_2();
                        std::cout << "请选择您的操作：";
                        std::cin >> choose_2;
                    }
            case 2: exit(0); break;
            default: std::cout << "选择的操作错误!\n";
        }

        menu_1();
        std::cout << "请选择您的操作：";
        std::cin >> choose_1;
    }

    return 0;
}
