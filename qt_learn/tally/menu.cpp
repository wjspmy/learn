#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
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
    //暂时未作

}
void menu::on_btn_6_clicked()
{
    model = new QSqlTableModel(this);
    model->setTable("record");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    QString name = "潘梦园";
    //根据姓名进行筛选
    model->setFilter(QString("name = '%1'").arg(name));
    //显示结果
    model->select();

    //不显示name属性列,如果这时添加记录，则该属性的值添加不上
    // model->removeColumn(1);

    ui->tableView->setModel(model);

    //使其不可编辑
    // ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

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
