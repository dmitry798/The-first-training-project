#ifndef ADD_H
#define ADD_H

#include <QWidget>
#include <string>
#include <fstream>
#include <QFile>
#include "add2.h"
using namespace std;

namespace Ui {
class Add;
}

class Add : public QWidget
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = nullptr);
    ~Add();

private:
    void EnterText();
    void ClearText();
    string name, year, period, circulation, publishing;

private slots:
    void pushButton();

    void pushButton_3();

    void pushButton_4();

private:
    Ui::Add *ui;
    add2 myAdd;
};

#endif // ADD_H
