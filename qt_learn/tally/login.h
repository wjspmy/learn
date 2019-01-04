#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSqlQuery>
//#include "menu.h"

#include <QSqlError>


namespace Ui {
class login;
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    ~menu();

    void setname(QString name) {
        this->name = name;
    }
    QString getname() {
        return name;
    }

private slots:
    void on_btn_5_clicked();

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_6_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

private:
    Ui::menu *ui;
    QSqlTableModel *model;
    QString name;

};



class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();


private slots:
    void on_btn_login_clicked();

private:
    Ui::login *ui;
    menu menu1;
    QString name;
    QString password;


};


#endif // LOGIN_H
