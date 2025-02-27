#include "output.h"
#include "ui_output.h"

Output::Output(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Output)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)), this,SLOT(pushButton()));
}

Output::~Output()
{
    delete ui;
}

void Output::pushButton()
{
    ui->textBrowser->clear();
    try
    {
        ifstream fin;
        fin.open("base.txt");
        publishing = ui->lineEdit->text().toStdString();
        if(publishing.empty())
            throw 1;
        for (char &ch : publishing)
        {
            if (ch == ' ')
            {
                ch = '_';
            }
        }
        int i = 0;
        bool found = false;
        string Name, Year, Period, Circulation, Publishing;
        string result;
        while (fin >> Name >> Year >> Period >> Circulation >> Publishing)
        {
            if ((Period == "Периодическое") && (Publishing == publishing))
            {
                i++;
                string str = to_string(i) + ": " + Name;
                result += str + "\n";
                found = true;
            }
        }
        if(found)
        {
            string text = "Все периодические издания, выпускаемые данным издательством: ";
            text += "\n" + result;
            ui->textBrowser->setText(QString::fromStdString(text));
        }
        else
        {
            ui->textBrowser->setText("Такого издательства нет или у данного издательства нет периодических изданий");
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
}

