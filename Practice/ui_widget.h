/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(649, 219);
        Widget->setMinimumSize(QSize(649, 164));
        Widget->setMaximumSize(QSize(649, 219));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName("pushButton_7");

        verticalLayout->addWidget(pushButton_7);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\276\320\272\320\275\320\276", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\270\320\273\320\270 \320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214, \320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\221\320\260\320\267\321\203 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\275\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\321\217 \320\262\321\201\320\265\321\205 \320\277\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\321\201\320\272\320\270\321\205 \320\270\320\267\320\264\320\260\320\275\320\270\320\271, \320\262\321\213\320\277\321\203\321\201\320\272\320\260\320\265\320\274\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\320\274 \320\270\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276\320\274", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\320\262\320\265\320\264\320\265\320\275\320\270\321\217 \320\276 \320\275\320\265\320\277\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\321\201\320\272\320\270\321\205 \320\270\320\267\320\264\320\260\320\275\320\270\321\217\321\205, \320\262\321\213\321\210\320\265\320\264\321\210\320\270\321\205 \321\202\320\270\321\200\320\260\320\266\320\276\320\274 \320\275\320\265 \320\274\320\265\320\275\320\265\320\265 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\263\320\276", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Widget", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\321\214 \320\270\320\267\320\264\320\260\321\202\320\265\320\273\321\214\321\201\321\202\320\262\320\276, \320\262\321\213\320\277\321\203\321\201\321\202\320\270\320\262\321\210\320\265\320\265 \320\262 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\274 \320\263\320\276\320\264\321\203 \320\275\320\260\320\270\320\261\320\276\320\273\321\214\321\210\320\265\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\265\320\264\320\270\320\275\320\270\321\206 \320\277\320\265\321\207\320\260\321\202\320\275\320\276\320\271 \320\277\321\200\320\276\320\264\321\203\320\272\321\206\320\270\320\270", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Widget", "\320\223\321\200\320\260\321\204\320\270\320\272 \320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276\321\201\321\202\320\270 \321\202\320\270\321\200\320\260\320\266\320\260 \320\276\321\202 \320\263\320\276\320\264\320\260 \320\264\320\273\321\217 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\263\320\276 \320\277\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\265\321\201\320\272\320\276\320\263\320\276 \320\270\320\267\320\264\320\260\320\275\320\270\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
