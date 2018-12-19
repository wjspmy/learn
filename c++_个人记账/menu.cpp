/*************************************************************************
    > File Name: menu.cpp
    > Author: 潘梦园
    > brief:  
    > Created Time: 2018年12月16日 星期日 20时31分51秒
 ************************************************************************/

#include <iostream>
#include <string.h>
#include <mysql/mysql.h>

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


//MYSQL mysql;
//mysql_init(&mysql);

bool login(char* username, char* password) {
    std::cout << "Please input the username: ";
    std::cin >> username;
    std::cout << "Please input the password: ";
    std::cin >> password;
    if (strcmp("root",  username) == 0 || strcmp("123456.+", password) == 0) {
        
        std::cout << "账户名或密码错误，请重新输入！";
        return false;
    }else {
        MYSQL mysql;
        mysql_init(&mysql);
        mysql_real_connect(&mysql, "localhost", username, password, "test", 3306, NULL, 0);
        return true;
    }

}



int main()
{
    //准备mysql的访问结构
    /*MYSQL mysql;
    mysql_init( &mysql );
  
    mysql_real_connect(
        &mysql,
        "localhost",   //要访问数据库的IP地址
        "root",         //用户名
        "123456.+",         //密码
        "test",         //要访问的数据库
        3306,           //该数据库的端口
        NULL,           //一般为NULL
        0           //一般为0
    );
  
    //插入
    //string sql = "insert into student value(1, 'jp', 24, 'gzjd')";
  
    //删除
    //string sql = "delete from student where id = 33";
  
    //执行sql语句
    //mysql_query( &mysql, sql.c_str() );
 
    //关闭数据库连接
    mysql_close( &mysql );
    */
    char* username;
    char* password;
    if (login(username, password)) {
        std::cout << "TREU\n";
    } else {
        std::cout << "ERROR\n";
    };
 
    return 0;
}
