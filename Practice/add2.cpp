#include "add2.h"
#include "ui_add2.h"

add2::add2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::add2)
{
    ui->setupUi(this);
}

add2::~add2()
{
    delete ui;
}

void add2::Printer()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    ifstream fin;
    fin.open("base.txt");
    string Name, Year, Period, Circulation, Publishing;
    while (fin >> Name >> Year >> Period >> Circulation >> Publishing)
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
    fin.close();
}
