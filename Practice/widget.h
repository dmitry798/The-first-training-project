#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <string>
#include <fstream>
#include <QFile>

#include "add.h"
#include "output.h"
#include "output2.h"
#include "output3.h"
#include "form.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void pushButton();

    void pushButton_2();

    void pushButton_4();

    void pushButton_5();

    void pushButton_6();

    void pushButton_7();

private:
    Ui::Widget *ui;
    void EnterText();
    void ClearText();

    Add add;
    Output Out1;
    output2 Out2;
    output3 Out3;
    Form form;
    string name, year, period, circulation, publishing;
};
#endif // WIDGET_H
