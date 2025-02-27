#ifndef OUTPUT3_H
#define OUTPUT3_H

#include <QWidget>
#include <string>
#include <fstream>
using namespace std;

namespace Ui {
class output3;
}

class output3 : public QWidget
{
    Q_OBJECT

public:
    explicit output3(QWidget *parent = nullptr);
    ~output3();

private slots:
    void pushButton();

private:
    Ui::output3 *ui;
    string year;
};

#endif // OUTPUT3_H
