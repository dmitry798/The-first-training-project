#include "widget.h"
#include "ui_widget.h"

//name, year, period, circulation, publishing;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)), this,SLOT(pushButton()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)), this,SLOT(pushButton_2()));
    connect(ui->pushButton_4,SIGNAL(clicked(bool)), this,SLOT(pushButton_4()));
    connect(ui->pushButton_5,SIGNAL(clicked(bool)), this,SLOT(pushButton_5()));
    connect(ui->pushButton_6,SIGNAL(clicked(bool)), this,SLOT(pushButton_6()));
    connect(ui->pushButton_7,SIGNAL(clicked(bool)), this,SLOT(pushButton_7()));
}

Widget::~Widget()
{
    delete ui;
}
//методы для моего удобства
void Widget::EnterText()
{
    /*
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
    */
}
void Widget::ClearText()
{
    /*
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
    */
}

//методы для практики
//добавление
void Widget::pushButton_2()
{
    add.show();
    /*
    ofstream fout;
    fout.open("base.txt", ofstream::app);
    EnterText();
    if(fout.is_open())
    {
        try
        {
            if(name.empty() or year.empty() or period == "Не выбрано" or period.empty()  or circulation.empty() or publishing.empty())
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
        catch(int)
        {
            ui->textBrowser->setText("1");
            //ТУТ ДОЛЖНО ВЫВОДИТЬСЯ ПРЕДУПРЕЖДЕНИЕ О ТОМ, ЧТО СТРОКИ ПУСТЫЕ И В ЧТО-ТО В ТОМ РОДЕ
        }
        catch(char)
        {
            ui->textBrowser->setText("2");
            //ТУТ ДОЛЖНО ВЫВОДИТЬСЯ ПРЕДУПРЕЖДЕНИЕ О ТОМ, ЧТО СТРОКИ(ГОД И ТИРАЖ) СОДЕРЖАТ БУКВЫ И В ЧТО-ТО В ТОМ РОДЕ
        }
    }
    ClearText();
    fout.close();
    */
}
//удаление - в файл add.h
/*void Widget::pushButton_2()
{
    /*
    ifstream fin;
    ofstream fout;
    fin.open("base.txt");
    fout.open("base_find.txt");
    EnterText();
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
                //t = fin1.pos(); // сохраняем текущую позицию чтения

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
                fin1.seek(t); // возвращаемся к сохраненной позиции чтения
                in1.flush(); // очищаем буфер чтения
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

}*/
//Требование 1
void Widget::pushButton_4()
{
    Out1.show();
    /*
    try
    {
        ifstream fin;
        fin.open("base.txt");
        EnterText();
        if(period == "Не выбрано" or period == "Непериодическое" or publishing.empty())
            throw 1;
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
        ClearText();
        fin.close();
    }
    catch(int)
    {
        ui->textBrowser->setText("4");
        //ТУТ ТЫ ДОЛЖЕН ВЫВЕСТИ ПРЕДУПРЕЖДЕНИЕ, ЧТО НУЖНЫЕ ПОЛЯ НЕ ЗАПОЛНЕНЫ
    }
    */
}
//Требование2
void Widget::pushButton_5()
{
    Out2.show();
    /*
    try
    {
        ifstream fin;
        fin.open("base.txt");
        EnterText();
        if(period == "Не выбрано" or period == "Периодическое" or circulation.empty())
            throw 1;
        int i = 0;
        bool found = false;
        string Name, Year, Period, Circulation, Publishing;
        string result;
        while (fin >> Name >> Year >> Period >> Circulation >> Publishing)
        {
            if (Circulation <= circulation)
            {
                i++;
                string str = to_string(i) + ": " + Name + " " + Year + " " + Period + " " + Circulation + " " + Publishing;
                result += str + "\n";
                found = true;
            }
        }
        if(found)
        {
            string text = "Все сведения о непериодических изданиях, вышедших тиражом не менее указанного: ";
            text += "\n" + result;
            ui->textBrowser->setText(QString::fromStdString(text));
        }
        else
        {
            ui->textBrowser->setText("");
        }
        ClearText();
        fin.close();
    }
    catch(int)
    {
        ui->textBrowser->setText("5");
        //ТУТ ТЫ ДОЛЖЕН ВЫВЕСТИ ПРЕДУПРЕЖДЕНИЕ, ЧТО НУЖНЫЕ ПОЛЯ НЕ ЗАПОЛНЕНЫ
    }
    */
}
//Требование 3
void Widget::pushButton_6()
{
    Out3.show();
    /*
    try
    {
        ifstream fin, fin1;
        ofstream fout;
        fin.open("base.txt");
        fin1.open("base_find.txt");
        fout.open("base_find.txt");
        EnterText();
        if(year.empty())
            throw 1;
        bool found = false;
        int max = 0;
        string Name, Year, Period, Circulation, Publishing;
        string result;
        while (fin >> Name >> Year >> Period >> Circulation >> Publishing)
        {
            if (Period == "Непериодическое" and Year == year)
            {
                if(max < stoi(Circulation))
                {
                    max = stoi(Circulation);
                }
                string str = Name + " " + Year + " " + Period + " " + Circulation + " " + Publishing;
                result += str + "\n";
                fout << str << endl;
                found = true;
            }
        }
        result = "";
        while (fin1 >> Name >> Year >> Period >> Circulation >> Publishing)
        {
            if (stoi(Circulation) == max)
            {
                string str = Publishing;
                result += str + "\n";
                fout << str << endl;
                found = true;
            }
        }
        if(found)
        {
            string text = "Издательство, выпустившее в указанном году наибольшее количество единиц печатной продукции: ";
            text += "\n" + result;
            ui->textBrowser->setText(QString::fromStdString(text));
        }
        else
        {
            ui->textBrowser->setText("");
        }
        ClearText();
        fin.close();
        fout.close();
    }
    catch(int)
    {
        ui->textBrowser->setText("6");
        //ТУТ ТЫ ДОЛЖЕН ВЫВЕСТИ ПРЕДУПРЕЖДЕНИЕ, ЧТО НУЖНЫЕ ПОЛЯ НЕ ЗАПОЛНЕНЫ
    }
    */
}
//Требование 4
void Widget::pushButton_7()
{
    form.show();
    /*
    try
    {
        ifstream fin, fin1;
        ofstream fout;
        fin.open("base.txt");
        fout.open("base_find.txt");
        fin1.open("base_find.txt");
        EnterText();
        if(period == "Не выбрано" or period == "Непериодическое" or name.empty())
            throw 1;
        int k = 0;
        double max1 = 0.0001;
        double max2 = 0.0001;
        double min1 = 9999.0001;
        double min2 = 9999.0001;
        string Name, Year, Period, Circulation, Publishing;
        string result;
        while (fin >> Name >> Year >> Period >> Circulation >> Publishing)
        {
            if ((Period == "Периодическое") && (Name == name))
            {
                if(max1 < stoi(Year))
                {
                    max1 = stoi(Year) + 0.0001;
                }
                if(max2 < stoi(Circulation))
                {
                    max2 = stoi(Circulation)  + 0.0001;
                }
                if(min1 > stoi(Year))
                {
                    min1 = stoi(Year) - 0.0001;
                }
                if(min2 > stoi(Circulation))
                {
                    min2 = stoi(Circulation)  - 0.0001;
                }
                k++;
                string str = Name + " " + Year + " " + Period + " " + Circulation + " " + Publishing;
                result += str + "\n";
                fout << str << endl;
            }
        }
        form.drawGraphics(k, max1, max2, min1, min2);
        form.show();
        ClearText();
        fin.close();
        fout.close();
        fin1.close();
    }
    catch(int)
    {
        ui->textBrowser->setText("7");
        //ТУТ ТЫ ДОЛЖЕН ВЫВЕСТИ ПРЕДУПРЕЖДЕНИЕ, ЧТО НУЖНЫЕ ПОЛЯ НЕ ЗАПОЛНЕНЫ
    }
    */
}


void Widget::pushButton()
{
    qApp->closeAllWindows();
}


