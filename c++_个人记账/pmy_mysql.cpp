/*************************************************************************
    > File Name: pmy_mysql.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月17日 星期一 23时01分06秒
 ************************************************************************/

#include <iostream>
#include <string.h>
#include <mysql/mysql.h>

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
        std::cin >> psw;
        if (strcmp(user, "root") != 0 || strcmp(psw, "123456.+") != 0) {
            std::cout << "error!\n";
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

int main() {
	bool sign = login();
	return 0;
}
	
