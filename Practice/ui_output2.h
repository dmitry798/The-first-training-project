/********************************************************************************
** Form generated from reading UI file 'output2.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUT2_H
#define UI_OUTPUT2_H

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

class Ui_output2
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

    void setupUi(QWidget *output2)
    {
        if (output2->objectName().isEmpty())
            output2->setObjectName("output2");
        output2->resize(588, 413);
        output2->setMinimumSize(QSize(372, 236));
        horizontalLayout_2 = new QHBoxLayout(output2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(output2);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(output2);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_2->addWidget(lineEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(output2);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(output2);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        tableWidget = new QTableWidget(output2);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");

        verticalLayout_3->addWidget(tableWidget);


        horizontalLayout_2->addLayout(verticalLayout_3);


        retranslateUi(output2);
        QObject::connect(pushButton_2, &QPushButton::clicked, output2, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(output2);
    } // setupUi

    void retranslateUi(QWidget *output2)
    {
        output2->setWindowTitle(QCoreApplication::translate("output2", "C\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\276 \320\275\320\265\320\277\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\321\201\320\272\320\270\321\205 \320\270\320\267\320\264\320\260\320\275\320\270\321\217\321\205, \320\262\321\213\321\210\320\265\320\264\321\210\320\270\321\205 \321\202\320\270\321\200\320\260\320\266\320\276\320\274 \320\275\320\265 \320\274\320\265\320\275\320\265\320\265 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\263\320\276", nullptr));
        label->setText(QCoreApplication::translate("output2", "\320\242\320\270\321\200\320\260\320\266:", nullptr));
        pushButton->setText(QCoreApplication::translate("output2", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("output2", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("output2", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("output2", "\320\223\320\276\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("output2", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("output2", "\320\242\320\270\321\200\320\260\320\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("output2", "\320\230\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class output2: public Ui_output2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUT2_H
