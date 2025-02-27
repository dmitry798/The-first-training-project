#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QVector>
#include <string>
#include<fstream>
#include "qcustomplot.h"
using namespace std;
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    void drawGraphics(int graphsCount, double m1, double m2, double m3, double m4);

    void fillVectors(QVector<double>& x, QVector<double>& y);

private slots:
    void pushButton_2();

    void pushButton();

private:
    Ui::Form *ui;
    QCustomPlot customPlot;
    string name;
    QCPTextElement *title;
};

#endif // FORM_H
