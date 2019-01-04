#include "login.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
}

menu::~menu()
{
    delete ui;
}

void menu::on_btn_5_clicked()
{
    this->close();
}

void menu::on_btn_1_clicked()
{
    QString year = ui->year->currentText();
    QString month = ui->month->currentText();
    QString day = ui->day->currentText();

    model = new QSqlTableModel(this);
    model->setTable("record");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    model->setFilter(QString("time= '%1-%2-%3' and name = '%4'").arg(year) .arg(month) .arg(day) .arg(name));//根据登陆用户的用户名来查询账单

    model->setSort(1,Qt::DescendingOrder); //排序方式为降序

    model->select();//显示结果

    //model->removeColumn(0);//不显示name属性列,如果这时添加记录，则该属性的值添加不上

    ui->tableView->setModel(model);
    model->setHeaderData(0, Qt::Horizontal, tr("姓名"));//将name修改为姓名
    model->setHeaderData(1, Qt::Horizontal, tr("时间"));
    model->setHeaderData(2, Qt::Horizontal, tr("金额"));
    model->setHeaderData(3, Qt::Horizontal, tr("说明"));
}

void menu::on_btn_6_clicked()
{
    model = new QSqlTableModel(this);
    model->setTable("record");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    model->setFilter(QString("name = '%1'").arg(name));//根据登陆用户的用户名来查询账单
    model->setSort(1,Qt::DescendingOrder); //排序方式为降序

    model->select();//显示结果

    //model->removeColumn(0);//不显示name属性列,如果这时添加记录，则该属性的值添加不上
    model->setHeaderData(0, Qt::Horizontal, tr("姓名"));//将name修改为姓名
    model->setHeaderData(1, Qt::Horizontal, tr("时间"));
    model->setHeaderData(2, Qt::Horizontal, tr("金额"));
    model->setHeaderData(3, Qt::Horizontal, tr("说明"));

    ui->tableView->setModel(model);
}


void menu::on_btn_2_clicked()
{
    model->database().transaction(); //开始事务操作
        if (model->submitAll()) {
            model->database().commit(); //提交
        } else {
            model->database().rollback(); //回滚
            QMessageBox::warning(this, tr("tableModel"), tr("数据库错误: %1") .arg(model->lastError().text()));
        }
}


void menu::on_btn_3_clicked()
{
    int rowNum = model->rowCount(); //获得表的行数

    model->insertRow(rowNum); //添加一行
    model->setData(model->index(rowNum,0), "");
    model->submitAll(); //可以直接提交
}

void menu::on_btn_4_clicked()
{
    //获取选中的行
   int curRow = ui->tableView->currentIndex().row();

   //删除该行
   model->removeRow(curRow);

   int ok = QMessageBox::warning(this,tr("删除当前行!"),
                                 tr("你确定删除当前行吗？"),
                                 QMessageBox::Yes,QMessageBox::No);
   if(ok == QMessageBox::No) {
       model->revertAll(); //如果不删除，则撤销
   } else {
       model->submitAll(); //否则提交，在数据库中删除该行
   }
}
