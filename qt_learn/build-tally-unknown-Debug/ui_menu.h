/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QTableView *tableView;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *year;
    QComboBox *month;
    QComboBox *day;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *btn_1;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *btn_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *btn_3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QPushButton *btn_4;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QPushButton *btn_5;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QPushButton *btn_6;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(650, 367);
        tableView = new QTableView(menu);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(5, 11, 451, 261));
        layoutWidget_2 = new QWidget(menu);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(50, 290, 218, 27));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        year = new QComboBox(layoutWidget_2);
        year->setObjectName(QStringLiteral("year"));

        horizontalLayout_6->addWidget(year);

        month = new QComboBox(layoutWidget_2);
        month->setObjectName(QStringLiteral("month"));

        horizontalLayout_6->addWidget(month);

        day = new QComboBox(layoutWidget_2);
        day->setObjectName(QStringLiteral("day"));

        horizontalLayout_6->addWidget(day);

        layoutWidget = new QWidget(menu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 290, 101, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        btn_1 = new QPushButton(layoutWidget);
        btn_1->setObjectName(QStringLiteral("btn_1"));

        horizontalLayout->addWidget(btn_1);

        layoutWidget1 = new QWidget(menu);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(470, 61, 101, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        btn_2 = new QPushButton(layoutWidget1);
        btn_2->setObjectName(QStringLiteral("btn_2"));

        horizontalLayout_2->addWidget(btn_2);

        layoutWidget2 = new QWidget(menu);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(470, 100, 101, 33));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        btn_3 = new QPushButton(layoutWidget2);
        btn_3->setObjectName(QStringLiteral("btn_3"));

        horizontalLayout_3->addWidget(btn_3);

        layoutWidget3 = new QWidget(menu);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(470, 139, 101, 33));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        btn_4 = new QPushButton(layoutWidget3);
        btn_4->setObjectName(QStringLiteral("btn_4"));

        horizontalLayout_4->addWidget(btn_4);

        layoutWidget4 = new QWidget(menu);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(470, 178, 101, 33));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        btn_5 = new QPushButton(layoutWidget4);
        btn_5->setObjectName(QStringLiteral("btn_5"));

        horizontalLayout_5->addWidget(btn_5);

        layoutWidget_3 = new QWidget(menu);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(320, 330, 101, 33));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        btn_6 = new QPushButton(layoutWidget_3);
        btn_6->setObjectName(QStringLiteral("btn_6"));

        horizontalLayout_7->addWidget(btn_6);


        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Form", Q_NULLPTR));
        label_6->setText(QApplication::translate("menu", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        year->clear();
        year->insertItems(0, QStringList()
         << QApplication::translate("menu", "2019", Q_NULLPTR)
         << QApplication::translate("menu", "2018", Q_NULLPTR)
         << QApplication::translate("menu", "2017", Q_NULLPTR)
         << QApplication::translate("menu", "2016", Q_NULLPTR)
         << QApplication::translate("menu", "2015", Q_NULLPTR)
         << QApplication::translate("menu", "2014", Q_NULLPTR)
        );
        month->clear();
        month->insertItems(0, QStringList()
         << QApplication::translate("menu", "1", Q_NULLPTR)
         << QApplication::translate("menu", "2", Q_NULLPTR)
         << QApplication::translate("menu", "3", Q_NULLPTR)
         << QApplication::translate("menu", "4", Q_NULLPTR)
         << QApplication::translate("menu", "5", Q_NULLPTR)
         << QApplication::translate("menu", "6", Q_NULLPTR)
         << QApplication::translate("menu", "7", Q_NULLPTR)
         << QApplication::translate("menu", "8", Q_NULLPTR)
         << QApplication::translate("menu", "9", Q_NULLPTR)
         << QApplication::translate("menu", "10", Q_NULLPTR)
         << QApplication::translate("menu", "11", Q_NULLPTR)
         << QApplication::translate("menu", "12", Q_NULLPTR)
        );
        day->clear();
        day->insertItems(0, QStringList()
         << QApplication::translate("menu", "1", Q_NULLPTR)
         << QApplication::translate("menu", "2", Q_NULLPTR)
         << QApplication::translate("menu", "3", Q_NULLPTR)
         << QApplication::translate("menu", "4", Q_NULLPTR)
         << QApplication::translate("menu", "5", Q_NULLPTR)
         << QApplication::translate("menu", "6", Q_NULLPTR)
         << QApplication::translate("menu", "7", Q_NULLPTR)
         << QApplication::translate("menu", "8", Q_NULLPTR)
         << QApplication::translate("menu", "9", Q_NULLPTR)
         << QApplication::translate("menu", "10", Q_NULLPTR)
         << QApplication::translate("menu", "11", Q_NULLPTR)
         << QApplication::translate("menu", "12", Q_NULLPTR)
         << QApplication::translate("menu", "13", Q_NULLPTR)
         << QApplication::translate("menu", "14", Q_NULLPTR)
         << QApplication::translate("menu", "15", Q_NULLPTR)
         << QApplication::translate("menu", "16", Q_NULLPTR)
         << QApplication::translate("menu", "17", Q_NULLPTR)
         << QApplication::translate("menu", "18", Q_NULLPTR)
         << QApplication::translate("menu", "19", Q_NULLPTR)
         << QApplication::translate("menu", "20", Q_NULLPTR)
         << QApplication::translate("menu", "21", Q_NULLPTR)
         << QApplication::translate("menu", "22", Q_NULLPTR)
         << QApplication::translate("menu", "23", Q_NULLPTR)
         << QApplication::translate("menu", "24", Q_NULLPTR)
         << QApplication::translate("menu", "25", Q_NULLPTR)
         << QApplication::translate("menu", "26", Q_NULLPTR)
         << QApplication::translate("menu", "27", Q_NULLPTR)
         << QApplication::translate("menu", "28", Q_NULLPTR)
         << QApplication::translate("menu", "29", Q_NULLPTR)
         << QApplication::translate("menu", "30", Q_NULLPTR)
         << QApplication::translate("menu", "31", Q_NULLPTR)
        );
        label->setText(QApplication::translate("menu", "1.", Q_NULLPTR));
        btn_1->setText(QApplication::translate("menu", "\346\237\245\350\257\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("menu", "2.", Q_NULLPTR));
        btn_2->setText(QApplication::translate("menu", "\344\277\256\346\224\271", Q_NULLPTR));
        label_3->setText(QApplication::translate("menu", "3.", Q_NULLPTR));
        btn_3->setText(QApplication::translate("menu", "\346\267\273\345\212\240", Q_NULLPTR));
        label_4->setText(QApplication::translate("menu", "4.", Q_NULLPTR));
        btn_4->setText(QApplication::translate("menu", "\345\210\240\351\231\244", Q_NULLPTR));
        label_5->setText(QApplication::translate("menu", "5.", Q_NULLPTR));
        btn_5->setText(QApplication::translate("menu", "\351\200\200\345\207\272", Q_NULLPTR));
        label_7->setText(QApplication::translate("menu", "6", Q_NULLPTR));
        btn_6->setText(QApplication::translate("menu", "\346\237\245\350\257\242\346\211\200\346\234\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
