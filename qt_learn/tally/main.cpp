#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("tally");
    db.setUserName("root");
    db.setPassword("123456.+");
    if (!db.open()) {
        QMessageBox::critical(0, QObject::tr("无法打开数据库"), "无法创建数据库连接！ ", QMessageBox::Cancel);
    }

    login w;
    w.show();
    menu m;
    m.setname(w.getname());
    m.getname();

    return a.exec();
}
