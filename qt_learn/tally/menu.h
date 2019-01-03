#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlError>

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    ~menu();
    QString getname() {
        return name;
    }
    void setname(QString name) {
        this.name = name;
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

#endif // MENU_H
