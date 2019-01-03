#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSqlQuery>
#include "menu.h"


namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();
    void setname(QString name) {
        this.name = name;
    }
    void setpassword(QString password) {
        this.password = password;
    }
    QString getname() {
        return name;
    }
    QString getpassword() {
        return password;
    }


private slots:
    void on_btn_login_clicked();

private:
    Ui::login *ui;
    menu menu1;
    QString name;
    QString password;

};

#endif // LOGIN_H
