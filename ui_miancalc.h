/********************************************************************************
** Form generated from reading UI file 'miancalc.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIANCALC_H
#define UI_MIANCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_miancalc
{
public:
    QLineEdit *lineEdit;
    QPushButton *lbracket;
    QPushButton *rbracket;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *num8;
    QPushButton *num7;
    QPushButton *num9;
    QPushButton *times;
    QPushButton *num5;
    QPushButton *num4;
    QPushButton *num6;
    QPushButton *divide;
    QPushButton *num2;
    QPushButton *num1;
    QPushButton *num3;
    QPushButton *ac;
    QPushButton *dot;
    QPushButton *num0;
    QPushButton *equal;
    QPushButton *del;

    void setupUi(QWidget *miancalc)
    {
        if (miancalc->objectName().isEmpty())
            miancalc->setObjectName("miancalc");
        miancalc->resize(336, 300);
        lineEdit = new QLineEdit(miancalc);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 10, 291, 51));
        lbracket = new QPushButton(miancalc);
        lbracket->setObjectName("lbracket");
        lbracket->setGeometry(QRect(40, 80, 61, 31));
        rbracket = new QPushButton(miancalc);
        rbracket->setObjectName("rbracket");
        rbracket->setGeometry(QRect(100, 80, 61, 31));
        add = new QPushButton(miancalc);
        add->setObjectName("add");
        add->setGeometry(QRect(160, 80, 61, 31));
        sub = new QPushButton(miancalc);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(220, 80, 61, 31));
        num8 = new QPushButton(miancalc);
        num8->setObjectName("num8");
        num8->setGeometry(QRect(100, 120, 61, 31));
        num7 = new QPushButton(miancalc);
        num7->setObjectName("num7");
        num7->setGeometry(QRect(40, 120, 61, 31));
        num9 = new QPushButton(miancalc);
        num9->setObjectName("num9");
        num9->setGeometry(QRect(160, 120, 61, 31));
        times = new QPushButton(miancalc);
        times->setObjectName("times");
        times->setGeometry(QRect(220, 120, 61, 31));
        num5 = new QPushButton(miancalc);
        num5->setObjectName("num5");
        num5->setGeometry(QRect(100, 160, 61, 31));
        num4 = new QPushButton(miancalc);
        num4->setObjectName("num4");
        num4->setGeometry(QRect(40, 160, 61, 31));
        num6 = new QPushButton(miancalc);
        num6->setObjectName("num6");
        num6->setGeometry(QRect(160, 160, 61, 31));
        divide = new QPushButton(miancalc);
        divide->setObjectName("divide");
        divide->setGeometry(QRect(220, 160, 61, 31));
        num2 = new QPushButton(miancalc);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(100, 200, 61, 31));
        num1 = new QPushButton(miancalc);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(40, 200, 61, 31));
        num3 = new QPushButton(miancalc);
        num3->setObjectName("num3");
        num3->setGeometry(QRect(160, 200, 61, 31));
        ac = new QPushButton(miancalc);
        ac->setObjectName("ac");
        ac->setGeometry(QRect(220, 200, 61, 31));
        dot = new QPushButton(miancalc);
        dot->setObjectName("dot");
        dot->setGeometry(QRect(100, 240, 61, 31));
        num0 = new QPushButton(miancalc);
        num0->setObjectName("num0");
        num0->setGeometry(QRect(40, 240, 61, 31));
        equal = new QPushButton(miancalc);
        equal->setObjectName("equal");
        equal->setGeometry(QRect(160, 240, 61, 31));
        del = new QPushButton(miancalc);
        del->setObjectName("del");
        del->setGeometry(QRect(220, 240, 61, 31));

        retranslateUi(miancalc);
        QObject::connect(lbracket, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(rbracket, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(add, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(sub, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(num7, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(num8, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(num9, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(times, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(num4, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(num5, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(num6, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(divide, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(num1, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(num2, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(num3, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(ac, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(num0, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(dot, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(equal, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(del, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));
        QObject::connect(equal, SIGNAL(clicked()), miancalc, SLOT(Btn_onClick()));

        QMetaObject::connectSlotsByName(miancalc);
    } // setupUi

    void retranslateUi(QWidget *miancalc)
    {
        miancalc->setWindowTitle(QCoreApplication::translate("miancalc", "miancalc", nullptr));
        lbracket->setText(QCoreApplication::translate("miancalc", "\357\274\210", nullptr));
        rbracket->setText(QCoreApplication::translate("miancalc", "\357\274\211", nullptr));
        add->setText(QCoreApplication::translate("miancalc", "+", nullptr));
        sub->setText(QCoreApplication::translate("miancalc", "-", nullptr));
        num8->setText(QCoreApplication::translate("miancalc", "8", nullptr));
        num7->setText(QCoreApplication::translate("miancalc", "7", nullptr));
        num9->setText(QCoreApplication::translate("miancalc", "9", nullptr));
        times->setText(QCoreApplication::translate("miancalc", "*", nullptr));
        num5->setText(QCoreApplication::translate("miancalc", "5", nullptr));
        num4->setText(QCoreApplication::translate("miancalc", "4", nullptr));
        num6->setText(QCoreApplication::translate("miancalc", "6", nullptr));
        divide->setText(QCoreApplication::translate("miancalc", "/", nullptr));
        num2->setText(QCoreApplication::translate("miancalc", "2", nullptr));
        num1->setText(QCoreApplication::translate("miancalc", "1", nullptr));
        num3->setText(QCoreApplication::translate("miancalc", "3", nullptr));
        ac->setText(QCoreApplication::translate("miancalc", "AC", nullptr));
        dot->setText(QCoreApplication::translate("miancalc", ".", nullptr));
        num0->setText(QCoreApplication::translate("miancalc", "0", nullptr));
        equal->setText(QCoreApplication::translate("miancalc", "=", nullptr));
        del->setText(QCoreApplication::translate("miancalc", "DEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class miancalc: public Ui_miancalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIANCALC_H
