/********************************************************************************
** Form generated from reading UI file 'output3.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUT3_H
#define UI_OUTPUT3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_output3
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
    QTableWidget *tableWidget;

    void setupUi(QWidget *output3)
    {
        if (output3->objectName().isEmpty())
            output3->setObjectName("output3");
        output3->resize(389, 353);
        output3->setMinimumSize(QSize(389, 353));
        horizontalLayout_2 = new QHBoxLayout(output3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(output3);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(output3);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(output3);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(output3);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(output3);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_3->addWidget(tableWidget);


        horizontalLayout_2->addLayout(verticalLayout_3);


        retranslateUi(output3);
        QObject::connect(pushButton_2, &QPushButton::clicked, output3, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(output3);
    } // setupUi

    void retranslateUi(QWidget *output3)
    {
        output3->setWindowTitle(QCoreApplication::translate("output3", "\320\230\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276, \320\262\321\213\320\277\321\203\321\201\321\202\320\270\320\262\321\210\320\265\320\265 \320\262 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\274 \320\263\320\276\320\264\321\203 \320\275\320\260\320\270\320\261\320\276\320\273\321\214\321\210\320\265\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\265\320\264\320\270\320\275\320\270\321\206 \320\277\320\265\321\207\320\260\321\202\320\275\320\276\320\271 \320\277\321\200\320\276\320\264\321\203\320\272\321\206\320\270\320\270", nullptr));
        label->setText(QCoreApplication::translate("output3", "\320\223\320\276\320\264:", nullptr));
        pushButton->setText(QCoreApplication::translate("output3", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("output3", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("output3", "\320\242\320\270\321\200\320\260\320\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("output3", "\320\230\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class output3: public Ui_output3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUT3_H
