#ifndef ADD2_H
#define ADD2_H

#include <QWidget>
#include <string>
#include <fstream>
using namespace std;

namespace Ui {
class add2;
}

class add2 : public QWidget
{
    Q_OBJECT

public:
    explicit add2(QWidget *parent = nullptr);
    ~add2();
    void Printer();
private:
    Ui::add2 *ui;

};

#endif // ADD2_H
