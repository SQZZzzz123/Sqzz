/********************************************************************************
** Form generated from reading UI file 'loginview.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINVIEW_H
#define UI_LOGINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginView
{
public:
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *inputUserName;
    QLineEdit *inputUserPassword;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btSignUp;
    QPushButton *btSignIn;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;

    void setupUi(QWidget *LoginView)
    {
        if (LoginView->objectName().isEmpty())
            LoginView->setObjectName("LoginView");
        LoginView->resize(732, 543);
        verticalLayout_4 = new QVBoxLayout(LoginView);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer_2 = new QSpacerItem(20, 49, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label_2 = new QLabel(LoginView);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 47, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 68, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(LoginView);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(LoginView);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        inputUserName = new QLineEdit(LoginView);
        inputUserName->setObjectName("inputUserName");

        verticalLayout->addWidget(inputUserName);

        inputUserPassword = new QLineEdit(LoginView);
        inputUserPassword->setObjectName("inputUserPassword");

        verticalLayout->addWidget(inputUserPassword);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btSignUp = new QPushButton(LoginView);
        btSignUp->setObjectName("btSignUp");

        horizontalLayout_3->addWidget(btSignUp);

        btSignIn = new QPushButton(LoginView);
        btSignIn->setObjectName("btSignIn");

        horizontalLayout_3->addWidget(btSignIn);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 58, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 49, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        label_4 = new QLabel(LoginView);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);


        retranslateUi(LoginView);

        QMetaObject::connectSlotsByName(LoginView);
    } // setupUi

    void retranslateUi(QWidget *LoginView)
    {
        LoginView->setWindowTitle(QCoreApplication::translate("LoginView", "\347\231\273\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("LoginView", "\346\254\242\350\277\216\344\275\277\347\224\250\350\257\212\346\226\255\346\265\213\350\257\225\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("LoginView", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("LoginView", "\345\257\206\347\240\201\357\274\232", nullptr));
        btSignUp->setText(QCoreApplication::translate("LoginView", "\346\263\250\345\206\214", nullptr));
        btSignIn->setText(QCoreApplication::translate("LoginView", "\347\231\273\345\275\225", nullptr));
        label_4->setText(QCoreApplication::translate("LoginView", "\350\224\241\347\247\213\346\230\216 2023414290101", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginView: public Ui_LoginView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINVIEW_H
