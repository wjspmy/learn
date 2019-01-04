#include "login.h"
#include "ui_login.h"



login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小

}

login::~login()
{
    delete ui;
}

void login::on_btn_login_clicked()
{


    name = ui->name->text() ;;
    password = ui->password->text();
    QString s = QString("select * from tally.user where name='%1'and password='%2' ").arg(name).arg(password);//数据库存储用户名用name密码用password

    QSqlQuery query;
    query.exec(s);
    if(query.first()) {
        menu1.setname(name);
        menu1.setWindowTitle("小潘记账系统");
        menu1.show();
        this->close();
    } else {
        ui->password->clear();
        QMessageBox::warning(NULL,"Error","登录失败，请重试！！！");

    }

}
