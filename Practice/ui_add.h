/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName("Add");
        Add->resize(390, 295);
        Add->setMinimumSize(QSize(390, 295));
        horizontalLayout_2 = new QHBoxLayout(Add);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(Add);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(Add);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(Add);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(Add);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout->addWidget(lineEdit_2);

        label_3 = new QLabel(Add);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        comboBox = new QComboBox(Add);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);

        label_4 = new QLabel(Add);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(Add);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout->addWidget(lineEdit_4);

        label_5 = new QLabel(Add);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        lineEdit_5 = new QLineEdit(Add);
        lineEdit_5->setObjectName("lineEdit_5");

        verticalLayout->addWidget(lineEdit_5);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton = new QPushButton(Add);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);

        pushButton_4 = new QPushButton(Add);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(Add);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(Add);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_2->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Add);
        QObject::connect(pushButton_2, &QPushButton::clicked, Add, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QWidget *Add)
    {
        Add->setWindowTitle(QCoreApplication::translate("Add", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214/\320\243\320\264\320\260\320\273\320\270\321\202\321\214/\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\221\320\224", nullptr));
        label->setText(QCoreApplication::translate("Add", "\320\235\320\260\320\270\320\274\320\276\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265:", nullptr));
        label_2->setText(QCoreApplication::translate("Add", "\320\223\320\276\320\264:", nullptr));
        label_3->setText(QCoreApplication::translate("Add", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Add", "\320\235\320\265 \320\262\321\213\320\261\321\200\320\260\320\275\320\276", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Add", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\321\201\320\272\320\276\320\265", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Add", "\320\235\320\265\320\277\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\321\201\320\272\320\276\320\265", nullptr));

        label_4->setText(QCoreApplication::translate("Add", "\320\242\320\270\321\200\320\260\320\266:", nullptr));
        label_5->setText(QCoreApplication::translate("Add", "\320\230\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276:", nullptr));
        pushButton->setText(QCoreApplication::translate("Add", "\320\222\320\262\320\265\321\201\321\202\320\270", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Add", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Add", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\221\320\224", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Add", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
