#ifndef OUTPUT2_H
#define OUTPUT2_H

#include <QWidget>
#include <string>
#include <fstream>
using namespace std;

namespace Ui {
class output2;
}

class output2 : public QWidget
{
    Q_OBJECT

public:
    explicit output2(QWidget *parent = nullptr);
    ~output2();

private slots:
    void pushButton();

private:
    Ui::output2 *ui;
    string circulation;
};

#endif // OUTPUT2_H
