#ifndef OUTPUT_H
#define OUTPUT_H

#include <QWidget>
#include <string>
#include <fstream>
using namespace std;

namespace Ui {
class Output;
}

class Output : public QWidget
{
    Q_OBJECT

public:
    explicit Output(QWidget *parent = nullptr);
    ~Output();

private slots:
    void pushButton();

private:
    Ui::Output *ui;
    string publishing;
};

#endif // OUTPUT_H
