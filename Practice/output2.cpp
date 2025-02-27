#include "output2.h"
#include "ui_output2.h"
output2::output2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::output2)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)), this,SLOT(pushButton()));
}
output2::~output2()
{
    delete ui;
}
void output2::pushButton()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    try
    {
        ifstream fin;
        fin.open("base.txt");
        circulation = ui->lineEdit->text().toStdString();
        bool key2 = false;
        for (char s : circulation)
        {
            if (isalpha(s) and !key2)
            {
                key2 = true;
            }
        }
        if(key2)
        {
            throw 'c';
        }
        if(circulation.empty())
            throw 1;
        string Name, Year, Period, Circulation, Publishing;
        while (fin >> Name >> Year >> Period >> Circulation >> Publishing)
        {
            if (Period == "Непериодическое" and stoi(Circulation) >= stoi(circulation))
            {
                int row = ui->tableWidget->rowCount();
                ui->tableWidget->insertRow(row);
                ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(Name)));
                ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(Year)));
                ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(Period)));
                ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(Circulation)));
                ui->tableWidget->setItem(row, 4, new QTableWidgetItem(QString::fromStdString(Publishing)));
                for (int row = 0; row < ui->tableWidget->rowCount(); ++row)
                {
                    for (int column = 0; column < ui->tableWidget->columnCount(); ++column)
                    {
                        QTableWidgetItem* item = ui->tableWidget->item(row, column);
                        if (item)
                        {
                            item->setFlags(item->flags() & ~Qt::ItemIsEditable);
                        }
                    }
                }
            }
        }
        ui->lineEdit->clear();
        fin.close();
    }
    catch(int)
    {
        ui->lineEdit->setText("Введите что-нибудь!");
        ui->lineEdit->selectAll();
        ui->lineEdit->setFocus();
    }
    catch(char)
    {
        ui->lineEdit->setText("Вводите только числа!");
        ui->lineEdit->selectAll();
        ui->lineEdit->setFocus();
    }
}

