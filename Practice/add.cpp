#include "add.h"
#include "ui_add.h"

Add::Add(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Add)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)), this,SLOT(pushButton()));
    connect(ui->pushButton_3,SIGNAL(clicked(bool)), this,SLOT(pushButton_3()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)), this,SLOT(pushButton_4()));
}

Add::~Add()
{
    delete ui;
}

void Add::EnterText()
{
    name = ui->lineEdit->text().toStdString();
    for (char &ch : name)
    {
        if (ch == ' ')
        {
            ch = '_';
        }
    }
    year = ui->lineEdit_2->text().toStdString();
    period = ui->comboBox->currentText().toStdString();
    circulation = ui->lineEdit_4->text().toStdString();
    publishing = ui->lineEdit_5->text().toStdString();
    for (char &ch : publishing)
    {
        if (ch == ' ')
        {
            ch = '_';
        }
    }
}

void Add::ClearText()
{
    //name
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
    //year
    ui->lineEdit_2->clear();
    //period
    ui->comboBox->setCurrentIndex(0);
    //circulation
    ui->lineEdit_4->clear();
    //publishing
    ui->lineEdit_5->clear();
}

void Add::pushButton()
{
    myAdd.close();
    ofstream fout;
    fout.open("base.txt", ofstream::app);
    EnterText();
    try
    {
        if(fout.is_open())
        {

            if(name.empty() or year.empty() or period == "Не выбрано" or period.empty()  or circulation.empty() or publishing.empty() or (name.empty() and year.empty() and period == "Не выбрано" and period.empty()  and circulation.empty() and publishing.empty()))
                throw 1;
            bool key1 = false;
            for (char c : year)
            {
                if (isalpha(c) and !key1)
                {
                    key1 = true;
                }
            }
            bool key2 = false;
            for (char s : circulation)
            {
                if (isalpha(s) and !key2)
                {
                    key2 = true;
                }
            }
            if(key1 or key2)
            {
                throw 'c';
            }
            fout << name << " " << year << " " << period << " " << circulation << " " << publishing << endl;
        }
        ClearText();
    }
    catch(int)
    {
        ClearText();
        QString error = "Нужно заполнить все поля!";
        ui->lineEdit->setText(error);
        ui->lineEdit->setSelection(0, error.length());
        ui->lineEdit->setFocus();
    }
    catch(char)
    {
        ClearText();
        QString error = "В полях Год и Тираж можно вводить только числа";
        ui->lineEdit->setText(error);
        ui->lineEdit->setSelection(0, error.length());
        ui->lineEdit->setFocus();
    }

    fout.close();
}


void Add::pushButton_3()
{
    myAdd.Printer();
    myAdd.show();
}


void Add::pushButton_4()
{
    myAdd.close();
    ifstream fin;
    ofstream fout;
    try
    {
        EnterText();
        // if(name.empty() || year.empty() || period == "Не выбрано" || period.empty()  || circulation.empty() || publishing.empty() || (name.empty() && year.empty() && period == "Не выбрано" && period.empty()  && circulation.empty() && publishing.empty()))
        //     throw 1;
        fin.open("base.txt");
        fout.open("base_find.txt");
        bool found = false;
        string Name, Year, Period, Circulation, Publishing;
        string result;
        while (fin >> Name >> Year >> Period >> Circulation >> Publishing)
        {
            if ((Name == name || name.empty()) && (Year == year || year.empty()) && (Period == period or period == "Не выбрано") && (Circulation == circulation || circulation.empty()) && (Publishing == publishing || publishing.empty()))
            {
                string str = Name + " " + Year + " " + Period + " " + Circulation + " " + Publishing;
                result += str + "\n";
                fout << str << endl;
                found = true;
            }
        }
        ClearText();
        fin.close();
        fout.close();
        if(found)
        {
            QFile fin1("base.txt");
            QFile fin2("base_find.txt");
            QFile fout1("temp.txt");

            if (fin1.open(QIODevice::ReadOnly | QIODevice::Text) &&
                fin2.open(QIODevice::ReadOnly | QIODevice::Text) &&
                fout1.open(QIODevice::WriteOnly | QIODevice::Text))
            {
                QTextStream in1(&fin1);
                QTextStream in2(&fin2);
                QTextStream out(&fout1);
                QString s1, s2;
                bool key = true;
                qint64 t;
                int k = 0;
                while (!in2.atEnd())
                {
                    s2 = in2.readLine();
                    key = true;

                    while (!in1.atEnd() && key)
                    {
                        s1 = in1.readLine();
                        if (s1 != s2)
                        {
                            out << s1 << "\n";
                        }
                        else
                        {
                            key = false;
                            t = fin1.pos();
                            k++;
                        }
                    }
                    fin1.seek(t);
                    in1.flush();
                }
                if (k > 0)
                {
                    fin1.seek(t);
                    while (!in1.atEnd())
                    {
                        s1 = in1.readLine();
                        out << s1 << "\n";
                    }
                }
            }
            fin1.close();
            fin2.close();
            fout1.close();
            remove("base.txt");
            rename("temp.txt", "base.txt");
            remove("base_find");
        }
    }
    catch(int)
    {
        ClearText();
        QString error = "Вы неправильно заполнили поля!";
        ui->lineEdit->setText(error);
        ui->lineEdit->selectAll();
        ui->lineEdit->setFocus();
    }
}

