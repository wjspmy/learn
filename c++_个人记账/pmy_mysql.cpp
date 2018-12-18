/*************************************************************************
    > File Name: pmy_mysql.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月17日 星期一 23时01分06秒
 ************************************************************************/

#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>

#include <mysql/mysql.h>

const int MAX = 20;
MYSQL mysql;



bool login()
{
	mysql_init(&mysql);  //连接mysql，数据库  
	const char host[] = "localhost";
	char user[20];
    char psw[20];
	const char table[] = "test";
	const int port = 3306;
    while (strcmp(user, "root") != 0 || strcmp(psw, "123456.+") != 0) {

        std::cout << "Please input username: ";
        std::cin >> user;
        std::cout << "Please input the password: ";
        system("stty -echo");
        std::cin >> psw;
        system("stty echo");
        std::cout << std::endl;
        if (strcmp(user, "root") != 0 || strcmp(psw, "123456.+") != 0) {
            std::cout << "用户名或密码错误!\n";
        }
        
    }
	if (!(mysql_real_connect(&mysql, host, user, psw, table, port, NULL, 0)) )
		//中间分别是主机，用户名，密码，数据库名，端口号（可以写默认0或者3306等），可以先写成参数再传进去  
	{
	    std::cout << "Error connecting to database: " <<  mysql_error(&mysql) << std::endl;
		return false;
	}
	else
	{
        std::cout << "Connected...\n";
		return true;
	}
}

//插入数据
void write() {
    //insert into student(id, name, age, address) values()
    std::string data = "insert into student(id, name, age, address) values('";
    std::string id;
    std::string age;
    std::string name;
    std::string address;
    std::cout << "请输入学号：";
    std::cin >> id;
    std::cout << "请输入姓名：";
    std::cin >> name;
    std::cout << "请输入年龄：";
    std::cin >> age;
    std::cout << "请输入地址：";
    std::cin >> address;

    
    data += id + "', '";
    data += name + "', '";
    data += age + "', '";
    data += address + "');";
    std::cout << data << std::endl;

    if (mysql_query(&mysql, data.c_str())) {
        std::cout << "插入失败\n";
    } else{
        std::cout << "插入成功\n"; 
    }

}



int main() {
	bool sign = login();
    write();
	return 0;
}
	
