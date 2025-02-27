/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCustomPlot *widget;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(590, 469);
        Form->setMinimumSize(QSize(590, 469));
        gridLayout = new QGridLayout(Form);
        gridLayout->setObjectName("gridLayout");
        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        pushButton = new QPushButton(Form);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        widget = new QCustomPlot(Form);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(572, 363));

        gridLayout->addWidget(widget, 3, 0, 1, 1);


        retranslateUi(Form);
        QObject::connect(pushButton, &QPushButton::clicked, Form, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
