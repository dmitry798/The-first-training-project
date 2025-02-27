/********************************************************************************
** Form generated from reading UI file 'output.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUT_H
#define UI_OUTPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Output
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Output)
    {
        if (Output->objectName().isEmpty())
            Output->setObjectName("Output");
        Output->resize(381, 249);
        Output->setMinimumSize(QSize(381, 249));
        horizontalLayout_2 = new QHBoxLayout(Output);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(Output);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(Output);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(Output);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Output);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(Output);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_3->addWidget(textBrowser);


        horizontalLayout_2->addLayout(verticalLayout_3);


        retranslateUi(Output);
        QObject::connect(pushButton_2, &QPushButton::clicked, Output, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Output);
    } // setupUi

    void retranslateUi(QWidget *Output)
    {
        Output->setWindowTitle(QCoreApplication::translate("Output", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\321\217 \320\262\321\201\320\265\321\205 \320\277\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\321\201\320\272\320\270\321\205 \320\270\320\267\320\264\320\260\320\275\320\270\320\271, \320\262\321\213\320\277\321\203\321\201\320\272\320\260\320\265\320\274\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\320\274 \320\270\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276\320\274", nullptr));
        label->setText(QCoreApplication::translate("Output", "\320\230\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276:", nullptr));
        pushButton->setText(QCoreApplication::translate("Output", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Output", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Output: public Ui_Output {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUT_H
