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

const int MAX_NAME = 20;

class Pmy {
public:
    void login();
    void insert();
    void select();
    void pmy_delete();
    void close() {
        mysql_close(&mysql);
    }
private:
    MYSQL mysql;
    MYSQL_ROW row;
    MYSQL_RES* result;
    MYSQL_FIELD* field; 

};


//登录
void Pmy::login() {
	mysql_init(&mysql);  //连接mysql，数据库  
    mysql_query(&mysql, "set names UTF8");
	char host[] = "localhost";
	char user[20];
    char psw[20];
	char table[] = "test";
	int port = 3306;
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
	if (!(mysql_real_connect(&mysql, host, user, psw, table, port, NULL, 0)) ){
        //中间分别是主机，用户名，密码，数据库名，端口号（可以写默认0或者3306等），可以先写成参数再传进去  
	    std::cout << "Error connecting to database: " <<  mysql_error(&mysql) << std::endl;
	} else {
        std::cout << "Connected...\n";
	}
}

//插入数据
void Pmy::insert() {
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

    if (mysql_query(&mysql, data.c_str())) {
        std::cout << "插入失败\n" << mysql_error(&mysql) << std::endl;
    } else{
        std::cout << "插入成功\n"; 
    }

}

//查询数据
void Pmy::select() {
    std::string data = "select * from student;";
    if (mysql_query(&mysql, data.c_str())) {
        std::cout << "查询失败!\n " << mysql_error(&mysql) << std::endl;
        return;
    } else {
        std::cout << "查询成功! " << std::endl; 
    }

    result = mysql_store_result(&mysql);
   
    int row_num = mysql_num_rows(result);
    std::cout << "All data number : " << row_num << std::endl;
    
    int field_num = mysql_num_fields(result);
    std::cout << "Field number : " << field_num << std::endl;

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

void Pmy::pmy_delete() {
    std::string id;
    std::cout << "请输入您要删除的学生学号：";
    std::cin >> id;
    std::string data = "delete from student where id = '";
    data += id + "';";
    std::cout << data << std::endl;
    if (mysql_query(&mysql, data.c_str())) {
        std::cout << "删除失败！\n" << mysql_error(&mysql) << std::endl;
        return;
    } else {
        std::cout << "删除成功！\n";
    }
}


int main() {
    Pmy pmy;
    pmy.login();
    int i = 0;
    std::cin >> i;
    switch(i) {
        case 1: pmy.insert();break;
        case 2: pmy.select(); break;
        case 3: pmy.pmy_delete();
        default : std::cout << "ERROR!\n";break;
    }
    //pmy.login();
    //pmy.insert();
    //pmy.select();
    //pmy.pmy_delete();
    pmy.close();
    return 0;
   
}  

	
