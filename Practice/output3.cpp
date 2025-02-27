#include "output3.h"
#include "ui_output3.h"

output3::output3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::output3)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)), this,SLOT(pushButton()));
}

output3::~output3()
{
    delete ui;
}

void output3::pushButton()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    try
    {
        ifstream fin, fin1;
        ofstream fout;
        fin.open("base.txt");
        fin1.open("base_find.txt");
        fout.open("base_find.txt");
        year = ui->lineEdit->text().toStdString();
        bool key1 = false;
        for (char c : year)
        {
            if (isalpha(c) and !key1)
            {
                key1 = true;
            }
        }
        if(key1)
        {
            throw 'c';
        }
        if(year.empty())
            throw 1;
        int max = 0;
        string Name, Year, Period, Circulation, Publishing;
        while (fin >> Name >> Year >> Period >> Circulation >> Publishing)
        {
            if (Year == year)
            {
                if(max < stoi(Circulation))
                {
                    max = stoi(Circulation);
                }
                string str = Circulation + " " + Publishing;
                fout << str << endl;
            }
        }
        while (fin1 >> Circulation >> Publishing)
        {
            if (stoi(Circulation) == max)
            {
                int row = ui->tableWidget->rowCount();
                ui->tableWidget->insertRow(row);
                ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(Circulation)));
                ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(Publishing)));
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
        fout.close();
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
/*void output3::pushButton()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    try
    {
        ifstream fin, fin1;
        ofstream fout;
        fin.open("base.txt");
        fin1.open("base_find.txt");
        fout.open("base_find.txt");
        year = ui->lineEdit->text().toStdString();
        bool key1 = false;
        for (char c : year)
        {
            if (isalpha(c) and !key1)
            {
                key1 = true;
            }
        }
        if(key1)
        {
            throw 'c';
        }
        if(year.empty())
            throw 1;
        int max = 0;
        string Name, Year, Period, Circulation, Publishing;
        while (fin >> Name >> Year >> Period >> Circulation >> Publishing)
        {
            if (Year == year)
            {
                if(max < stoi(Circulation))
                {
                    max = stoi(Circulation);
                }
                string str = Circulation + " " + Publishing;
                fout << str << endl;
            }
        }
        while (fin1 >> Circulation >> Publishing)
        {
            if (stoi(Circulation) == max)
            {
                int row = ui->tableWidget->rowCount();
                ui->tableWidget->insertRow(row);
                ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(Circulation)));
                ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(Publishing)));
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
        fout.close();
    }
    catch(int)
    {
        ui->lineEdit->setText("Введите что-нибудь!");
        ui->lineEdit->selectedText();
        ui->lineEdit->setFocus();
    }
    catch(char)
    {
        ui->lineEdit->setText("Вводите только числа!");
        ui->lineEdit->selectedText();
        ui->lineEdit->setFocus();
    }
}

*/
