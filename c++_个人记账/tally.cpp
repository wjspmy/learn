/*************************************************************************
    > File Name: tally.cpp
    > Author: wjspmy
    > brief:  c++_个人记账
    > Created Time: 2018年12月19日 星期三 22时13分59秒
 ************************************************************************/

#include <iostream>
#include "tally.h"

void Tally::pmy_login() {
	mysql_init(&mysql);  //连接mysql，数据库  
    mysql_query(&mysql, "set names UTF8");//使用UTF8字符集
	char host[] = "localhost";
	char user[20];
    char psw[20];
	char table[] = "tally";
	int port = 3306;
    while (strcmp(user, "root") != 0 || strcmp(psw, "123456.+") != 0) {
        std::cout << "请输入用户名：";
        std::cin >> user;
        std::cout << "请输入密码：";
        system("stty -echo");
        std::cin >> psw;
        system("stty echo");
        std::cout << std::endl;
        if (strcmp(user, "root") != 0 || strcmp(psw, "123456.+") != 0) {
            std::cout << "用户名或密码错误!\n\n";
        }
    }
	if (!(mysql_real_connect(&mysql, host, user, psw, table, port, NULL, 0)) ){
        //中间分别是主机，用户名，密码，数据库名，端口号（可以写默认0或者3306等），可以先写成参数再传进去
	    std::cout << "数据库连接错误!\n\n" <<  mysql_error(&mysql) << std::endl;
	}
}

//插入数据
void Tally::pmy_insert() {
    //insert into record(id, name, age, address) values()
    std::string data = "insert into record(time, people, price, message) values('";
    std::string time;
    std::string people;
    std::string price;
    std::string message;
    std::cout << "请输入该条账单产生的时间(XXXX-XX-XX)：";
    std::cin >> time;
    std::cout << "请输入产生这笔资金的人：";
    std::cin >> people;
    std::cout << "请输入这笔资金的金额：";
    std::cin >> price;
    std::cout << "请输入这笔资金的用途：";
    std::cin >> message;

    
    data += time + "', '";
    data += people + "', '";
    data += price + "', '";
    data += message + "');";

    if (mysql_query(&mysql, data.c_str())) {
        std::cout << "\n账单记录失败,请检查输入是否正确!\n" <<std::endl;
    } else{
        std::cout << "\n账单记录成功\n\n\n"; 
    }

}

//查询数据
void Tally::pmy_select() {
    
    menu_3();
    std::cout << "请选择您的操作: ";
    int choose = 0;
    int sign = 1;
    std::cin >> choose;
    while (choose) {

        if (sign == 0) {
            std::cout << "请选择您的操作：";
            std::cin >> choose;
        }
        
        std::cout << "\n\n";
        std::string data = "select * from record ";
        std::string select;//代表要查询的表字段
        switch(choose) {
            case 1: 
                sign = 1;

                data += "where time >= '";
    
                std::cout << "请输入起始时间(XXXX-XX-XX): ";
                std::cin >> select;
                data += select + "' and time <= '";
                std::cout << "请输入结束时间(XXXX-XX-XX): ";
                std::cin >> select;
                data += select + "' ";
                break;
            case 2:
                sign = 1;

                data += "where people = '";
                
                std::cout << "请输入要查询的人: ";
                std::cin >> select;
                data += select + "' ";
                break;
            case 3:
                sign = 1;

                break;
            case 4:
                sign = 1;

                return;
            default:
                sign = 0;
                std::cout << "输入的操作错误!!\n";
                
        }
        if (sign == 0) {
            continue;
        }
    
        data += "order by time desc;";
        //std::cout << data << std::endl;


        if (mysql_query(&mysql, data.c_str())) {
            std::cout << "账单查询失败,请检查输入是否合格!\n\n ";
            return;
        }

        result = mysql_store_result(&mysql);
   
        int row_num = mysql_num_rows(result);//获取表中所有符合条件的记录的条数
        //std::cout << "All data number : " << row_num << std::endl;
    
        int field_num = mysql_num_fields(result);//获取表中所有字段的个数
        //std::cout << "Field number : " << field_num << std::endl;



        std::cout << "\n\n";
        std::cout << "\t\t\t -----------------------------------------------------------------\n";
        std::cout << "\t\t\t                          个人记账系统                            \n";
        std::cout << "\t\t\t -----------------------------------------------------------------\n";
        std::cout << "\t\t\t                                                                  \n";
        std::cout << "\t\t\t    时  间         人       金  额   说  明                       \n";
        std::cout << "\t\t\t                                                                  \n";

        /*
         * 这段代码是获取数据库中表的字段名
        for (int i = 0; i < field_num; ++i) {
            field = mysql_fetch_field_direct(result, i);
            std::cout << field->name << '\t';
        }
        std::cout << std::endl;
        */

        row = mysql_fetch_row(result);
        while (row != NULL) {
            std::cout << "\t\t\t  ";
            for (int i = 0; i < field_num; ++i) {
                
                std::cout << row[i] << "      ";
            }
            std::cout << std::endl;
            row = mysql_fetch_row(result);
        }

        std::cout << std::endl;
        std::cout << "\t\t\t ----------------------------------------------------------------- \n";
        mysql_free_result(result);

        std::cout << "\n\n\n\n\n\n";
        menu_3();
        std::cout << "请输入您的操作：";
        std::cin >> choose;
    }

}



//删除数据
void Tally::pmy_delete() {
    std::string time;
    std::string people;
    std::string price;
    std::string message;
    std::cout << "请输入您要删除账单的时间(XXXX-XX-XX)：";
    std::cin >> time;
    std::cout << "请输入您要删除账单的所属人：";
    std::cin >> people;
    std::cout << "请输入您要删除账单的金额：";
    std::cin >> price;
    std::cout << "请输入您要删除账单的用途：";
    std::cin >> message;

    std::string data = "delete from record where time = '";
    data += time + "' and people = '";
    data += people + "' and price = '";
    data += price + "' and message = '";
    data += message + "';";
    
    if (mysql_query(&mysql, data.c_str())) {
        std::cout << "账单删除失败！\n" << mysql_error(&mysql) << std::endl;
        return;;

    } else {
        std::cout << "账单删除成功！\n\n\n\n\n\n";
    }
    
}
void Tally::pmy_update() {
    std::string old_time;
    std::string old_people;
    std::string old_price;
    std::string old_message;
    std::cout << "请输入您要修改的记录的信息：\n";
    std::cout << "时间：";
    std::cin >> old_time;
    std::cout << "人：";
    std::cin >> old_people;
    std::cout << "金额：";
    std::cin >> old_price;
    std::cout << "账单说明：";
    std::cin >> old_message;

    menu_4();
    std::cout << "请选择您的操作: ";
    int choose = 0;
    
    std::cin >> choose;
    while (choose) {

        std::cout << "\n\n";

        std::string data = "update record set ";
        std::string update;
       
        switch (choose) {
            case 1:
                std::cout << "请输入新的时间：";
                std::cin >> update;
                data += "time = '";
                break;
            case 2:
                std::cout << "请输入新的所属人：";
                std::cin >> update;
                data += "people = '";
                break;
            case 3:
                std::cout << "请输入新的账单价格：";
                std::cin >> update;
                data += "price = '";
                break;
            case 4:
                std::cout << "请输入新的账单说明：";
                std::cin >> update;
                data += "message = '";
                break;
            case 5:
                return;
            default: std::cout << "输入的操作错误！\n";
        }
        data += update + "' where time = '" + old_time + "' and ";
        data += "people = '" + old_people + "' and ";
        data += "price = '" + old_price + "' and ";
        data += "message = '" + old_message + "';";
        if (mysql_query(&mysql, data.c_str())) {
            std::cout << "账单修改失败\n" << mysql_error(&mysql) << std::endl;
        } else {
            std::cout << "账单修改成功\n\n\n\n\n\n";
        }

        menu_4();
        std::cout << "请输入您选择的操作：";
        std::cin >> choose;

    }
}

//关闭数据库连接
void Tally::pmy_quit() {
    mysql_close(&mysql);
    exit(0);
}
