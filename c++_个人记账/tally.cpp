/*************************************************************************
    > File Name: tally.cpp
    > Author: 潘梦园
    > brief:  
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
            std::cout << "用户名或密码错误!\n";
        }
        
    }
	if (!(mysql_real_connect(&mysql, host, user, psw, table, port, NULL, 0)) ){
        //中间分别是主机，用户名，密码，数据库名，端口号（可以写默认0或者3306等），可以先写成参数再传进去
	    std::cout << "数据库连接错误!\n" <<  mysql_error(&mysql) << std::endl;
	} else {
        std::cout << "数据库连接成功!\n";
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
    std::cout << data << std::endl;

    if (mysql_query(&mysql, data.c_str())) {
        std::cout << "插入失败\n" << mysql_error(&mysql) << std::endl;
    } else{
        std::cout << "插入成功\n"; 
    }

}

//查询数据
void Tally::pmy_select() {
    std::string data = "select * from record;";
    if (mysql_query(&mysql, data.c_str())) {
        std::cout << "查询失败!\n " << mysql_error(&mysql) << std::endl;
        return;
    } else {
        std::cout << "查询成功! " << std::endl; 
    }

    result = mysql_store_result(&mysql);
   
    int row_num = mysql_num_rows(result);
    //std::cout << "All data number : " << row_num << std::endl;
    
    int field_num = mysql_num_fields(result);
    //std::cout << "Field number : " << field_num << std::endl;

    for (int i = 0; i < field_num; ++i) {
        field = mysql_fetch_field_direct(result, i);
        std::cout << field->name << '\t';
    }
    std::cout << std::endl;

    row = mysql_fetch_row(result);
    while (row != NULL) {
        for (int i = 0; i < field_num; ++i) {
            std::cout << row[i] << '\t';
        }
        std::cout << std::endl;
        row = mysql_fetch_row(result);
    }
    mysql_free_result(result);

}



//删除数据
void Tally::pmy_delete() {
    std::string time;
    std::cout << "请输入您要删除账单的时间(XXXX-XX-XX)：";
    std::cin >> time;
    std::string data = "delete from record where time = '";
    data += time + "';";
    std::cout << data << std::endl;
    if (mysql_query(&mysql, data.c_str())) {
        std::cout << "删除失败！\n" << mysql_error(&mysql) << std::endl;
        return;
    } else {
        std::cout << "删除成功！\n";
    }
}

//关闭数据库连接
void Tally::pmy_quit() {
    mysql_close(&mysql);
    exit(0);
}
