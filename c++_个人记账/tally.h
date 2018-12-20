/*************************************************************************
    > File Name: tally.h
    > Author: wjspmy
    > brief:  c++_个人记账
    > Created Time: 2018年12月19日 星期三 22时13分59秒
 ************************************************************************/

#ifndef _TALLY_H_
#define _TALLY_H_

#include <iostream>
#include <string>
#include <string.h>
#include <mysql/mysql.h>

class Tally {
public :
    void pmy_login();//数据库的登录操作
    void pmy_insert();//数据库的插入操作
    void pmy_select();//数据库的查询操作
    void pmy_delete();//数据库的删除操作
    void pmy_update();//数据库的修改操作
    void pmy_quit();//退出数据库以及程序
private :
    MYSQL mysql;
    MYSQL_ROW row;
    MYSQL_RES* result;
    MYSQL_FIELD* field;
};

void menu_1();
void menu_2();
void menu_3();
void menu_4();

#endif
