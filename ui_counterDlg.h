/********************************************************************************
** Form generated from reading UI file 'counterDlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTERDLG_H
#define UI_COUNTERDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Counter
{
public:
    QPushButton *button;
    QLCDNumber *lcdNumber;
    QPushButton *button_2;
    QSlider *Slider;
    QPushButton *button_3;

    void setupUi(QWidget *Counter)
    {
        if (Counter->objectName().isEmpty())
            Counter->setObjectName(QString::fromUtf8("Counter"));
        Counter->resize(400, 300);
        button = new QPushButton(Counter);
        button->setObjectName(QString::fromUtf8("button"));
        button->setGeometry(QRect(20, 180, 161, 41));
        lcdNumber = new QLCDNumber(Counter);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(50, 40, 301, 91));
        button_2 = new QPushButton(Counter);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        button_2->setGeometry(QRect(220, 180, 161, 41));
        Slider = new QSlider(Counter);
        Slider->setObjectName(QString::fromUtf8("Slider"));
        Slider->setGeometry(QRect(30, 250, 160, 29));
        Slider->setOrientation(Qt::Horizontal);
        button_3 = new QPushButton(Counter);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        button_3->setGeometry(QRect(220, 240, 161, 41));

        retranslateUi(Counter);

        QMetaObject::connectSlotsByName(Counter);
    } // setupUi

    void retranslateUi(QWidget *Counter)
    {
        Counter->setWindowTitle(QApplication::translate("Counter", "Counter", 0, QApplication::UnicodeUTF8));
        button->setText(QApplication::translate("Counter", "STOP", 0, QApplication::UnicodeUTF8));
        button_2->setText(QApplication::translate("Counter", "Start", 0, QApplication::UnicodeUTF8));
        button_3->setText(QApplication::translate("Counter", "Reset", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Counter: public Ui_Counter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTERDLG_H
