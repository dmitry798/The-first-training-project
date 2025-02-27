#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);
    connect(ui->pushButton_2,SIGNAL(clicked(bool)), this,SLOT(pushButton_2()));
    title = new QCPTextElement(ui->widget);
    title->setFont(QFont("sans", 12, QFont::Bold));
    ui->widget->plotLayout()->insertRow(0); // добавляем ряд для заголовка
    ui->widget->plotLayout()->addElement(0, 0, title); // добавляем заголовок в левую часть первого ряда
    //connect(ui->pushButton,SIGNAL(clicked(bool)), this,SLOT(pushButton()));
    ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);

}

Form::~Form()
{
    delete title;
    delete ui;
}
void Form::drawGraphics(int graphsCount, double m1, double m2, double m3, double m4)
{
    QVector<double> x;
    QVector<double> y;
    /*ui->widget->clearGraphs();
    ui->widget->clearPlottables();
    ui->widget->clearItems();*/

    for(int i = 0; i < graphsCount; ++i)
    {
        fillVectors(x, y);
        ui->widget->addGraph();
        ui->widget->graph(i)->setData(x, y);
        ui->widget->xAxis->setLabel("Год");
        ui->widget->yAxis->setLabel("Тираж, шт");
        ui->widget->xAxis->setRange(m3, m1 );
        ui->widget->yAxis->setRange(m4, m2 );
        ui->widget->replot();
    }
}

void Form::fillVectors(QVector<double> &x, QVector<double> &y)
{
    //x.clear();
    //y.clear();
    //ui->widget->clearGraphs();
    ifstream fin1;
    fin1.open("base_find.txt");
    string Name, Year, Period, Circulation, Publishing;
    while (fin1 >> Name >> Year >> Period >> Circulation >> Publishing)
    {
        x.push_back(static_cast<double>(stoi(Year)));
        y.push_back(static_cast<double>(stoi(Circulation)));
    }
    fin1.close();
    remove("base_find.txt");
}


void Form::pushButton_2()
{
    try
    {
        ifstream fin;
        ofstream fout;
        fin.open("base.txt");
        fout.open("base_find.txt");
        name = ui->lineEdit->text().toStdString();
        if(name.empty())
            throw 1;

        QString Text = "График для периодического издания: " + QString::fromStdString(name);
        title->setText(Text);

        for (char &ch : name)
        {
            if (ch == ' ')
            {
                ch = '_';
            }
        }
        int k = 0;
        double max1 = 0.0001;
        double max2 = 0.0001;
        double min1 = 99999.0001;
        double min2 = 99999.0001;
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
        drawGraphics(k, max1, max2, min1, min2);
        ui->lineEdit->clear();
        fin.close();
        fout.close();

    }
    catch(int)
    {
        QString error = "Ошибка!";
        ui->lineEdit->setText(error);
        ui->lineEdit->selectAll();
        ui->lineEdit->setFocus();
    }
}


void Form::pushButton()
{
    ui->widget->close();
}

