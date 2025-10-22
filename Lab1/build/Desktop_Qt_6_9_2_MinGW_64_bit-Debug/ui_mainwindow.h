/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *btnNum8;
    QPushButton *btnNum5;
    QPushButton *btnEqual;
    QPushButton *btnNum2;
    QPushButton *btnNum0;
    QPushButton *btnDivide;
    QPushButton *btnNum3;
    QPushButton *btnClear;
    QPushButton *btnSquare;
    QPushButton *btnNum9;
    QPushButton *btnNum6;
    QPushButton *btnMultiple;
    QPushButton *btnPercentage;
    QPushButton *btnNum4;
    QPushButton *btnPlus;
    QPushButton *btnDel;
    QPushButton *btnNum1;
    QPushButton *btnInverse;
    QPushButton *btnSign;
    QPushButton *btnClearAll;
    QPushButton *btnSqrt;
    QPushButton *btnPeriod;
    QPushButton *btnNum7;
    QPushButton *btnMinus;
    QLineEdit *display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(965, 661);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgba(50,50,50,100);\n"
"font-size:26pt;\n"
"color:white;\n"
"border-radius:2px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:lightgreen;\n"
"color:black;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:red;\n"
"color:black;\n"
"}\n"
"QLineEdit{\n"
"font-size:48pt;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        btnNum8 = new QPushButton(centralwidget);
        btnNum8->setObjectName("btnNum8");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnNum8->sizePolicy().hasHeightForWidth());
        btnNum8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum8, 4, 1, 1, 1);

        btnNum5 = new QPushButton(centralwidget);
        btnNum5->setObjectName("btnNum5");
        sizePolicy.setHeightForWidth(btnNum5->sizePolicy().hasHeightForWidth());
        btnNum5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum5, 5, 1, 1, 1);

        btnEqual = new QPushButton(centralwidget);
        btnEqual->setObjectName("btnEqual");
        sizePolicy.setHeightForWidth(btnEqual->sizePolicy().hasHeightForWidth());
        btnEqual->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnEqual, 7, 3, 1, 1);

        btnNum2 = new QPushButton(centralwidget);
        btnNum2->setObjectName("btnNum2");
        sizePolicy.setHeightForWidth(btnNum2->sizePolicy().hasHeightForWidth());
        btnNum2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum2, 6, 1, 1, 1);

        btnNum0 = new QPushButton(centralwidget);
        btnNum0->setObjectName("btnNum0");
        sizePolicy.setHeightForWidth(btnNum0->sizePolicy().hasHeightForWidth());
        btnNum0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum0, 7, 1, 1, 1);

        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        sizePolicy.setHeightForWidth(btnDivide->sizePolicy().hasHeightForWidth());
        btnDivide->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnDivide, 3, 3, 1, 1);

        btnNum3 = new QPushButton(centralwidget);
        btnNum3->setObjectName("btnNum3");
        sizePolicy.setHeightForWidth(btnNum3->sizePolicy().hasHeightForWidth());
        btnNum3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum3, 6, 2, 1, 1);

        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName("btnClear");
        sizePolicy.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnClear, 2, 1, 1, 1);

        btnSquare = new QPushButton(centralwidget);
        btnSquare->setObjectName("btnSquare");
        sizePolicy.setHeightForWidth(btnSquare->sizePolicy().hasHeightForWidth());
        btnSquare->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnSquare, 3, 1, 1, 1);

        btnNum9 = new QPushButton(centralwidget);
        btnNum9->setObjectName("btnNum9");
        sizePolicy.setHeightForWidth(btnNum9->sizePolicy().hasHeightForWidth());
        btnNum9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum9, 4, 2, 1, 1);

        btnNum6 = new QPushButton(centralwidget);
        btnNum6->setObjectName("btnNum6");
        sizePolicy.setHeightForWidth(btnNum6->sizePolicy().hasHeightForWidth());
        btnNum6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum6, 5, 2, 1, 1);

        btnMultiple = new QPushButton(centralwidget);
        btnMultiple->setObjectName("btnMultiple");
        sizePolicy.setHeightForWidth(btnMultiple->sizePolicy().hasHeightForWidth());
        btnMultiple->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnMultiple, 4, 3, 1, 1);

        btnPercentage = new QPushButton(centralwidget);
        btnPercentage->setObjectName("btnPercentage");
        sizePolicy.setHeightForWidth(btnPercentage->sizePolicy().hasHeightForWidth());
        btnPercentage->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnPercentage, 2, 0, 1, 1);

        btnNum4 = new QPushButton(centralwidget);
        btnNum4->setObjectName("btnNum4");
        sizePolicy.setHeightForWidth(btnNum4->sizePolicy().hasHeightForWidth());
        btnNum4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum4, 5, 0, 1, 1);

        btnPlus = new QPushButton(centralwidget);
        btnPlus->setObjectName("btnPlus");
        sizePolicy.setHeightForWidth(btnPlus->sizePolicy().hasHeightForWidth());
        btnPlus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnPlus, 6, 3, 1, 1);

        btnDel = new QPushButton(centralwidget);
        btnDel->setObjectName("btnDel");
        sizePolicy.setHeightForWidth(btnDel->sizePolicy().hasHeightForWidth());
        btnDel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnDel, 2, 3, 1, 1);

        btnNum1 = new QPushButton(centralwidget);
        btnNum1->setObjectName("btnNum1");
        sizePolicy.setHeightForWidth(btnNum1->sizePolicy().hasHeightForWidth());
        btnNum1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnNum1, 6, 0, 1, 1);

        btnInverse = new QPushButton(centralwidget);
        btnInverse->setObjectName("btnInverse");
        sizePolicy.setHeightForWidth(btnInverse->sizePolicy().hasHeightForWidth());
        btnInverse->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnInverse, 3, 0, 1, 1);

        btnSign = new QPushButton(centralwidget);
        btnSign->setObjectName("btnSign");
        sizePolicy.setHeightForWidth(btnSign->sizePolicy().hasHeightForWidth());
        btnSign->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnSign, 7, 0, 1, 1);

        btnClearAll = new QPushButton(centralwidget);
        btnClearAll->setObjectName("btnClearAll");
        sizePolicy.setHeightForWidth(btnClearAll->sizePolicy().hasHeightForWidth());
        btnClearAll->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnClearAll, 2, 2, 1, 1);

        btnSqrt = new QPushButton(centralwidget);
        btnSqrt->setObjectName("btnSqrt");
        sizePolicy.setHeightForWidth(btnSqrt->sizePolicy().hasHeightForWidth());
        btnSqrt->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnSqrt, 3, 2, 1, 1);

        btnPeriod = new QPushButton(centralwidget);
        btnPeriod->setObjectName("btnPeriod");
        sizePolicy.setHeightForWidth(btnPeriod->sizePolicy().hasHeightForWidth());
        btnPeriod->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnPeriod, 7, 2, 1, 1);

        btnNum7 = new QPushButton(centralwidget);
        btnNum7->setObjectName("btnNum7");
        sizePolicy.setHeightForWidth(btnNum7->sizePolicy().hasHeightForWidth());
        btnNum7->setSizePolicy(sizePolicy);
        btnNum7->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btnNum7, 4, 0, 1, 1);

        btnMinus = new QPushButton(centralwidget);
        btnMinus->setObjectName("btnMinus");
        sizePolicy.setHeightForWidth(btnMinus->sizePolicy().hasHeightForWidth());
        btnMinus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(btnMinus, 5, 3, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(display, 1, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 965, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\345\231\250 \350\224\241\347\247\213\346\230\216 2023414290101", nullptr));
        btnNum8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btnNum5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btnEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btnNum2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btnNum0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btnNum3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        btnSquare->setText(QCoreApplication::translate("MainWindow", "x^2", nullptr));
        btnNum9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btnNum6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btnMultiple->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        btnPercentage->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btnNum4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btnPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnDel->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        btnNum1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btnInverse->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        btnSign->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        btnClearAll->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btnSqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
        btnPeriod->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btnNum7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        display->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
