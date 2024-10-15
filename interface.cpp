#include "interface.h"

TInterface::TInterface(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Практика №4");
    setFixedSize(1000, 500);

    a_name = new QLabel("a = ", this);
    a_name->setGeometry(100, 30, 20, 20);
    a_re = new QLineEdit(this);
    a_re->setGeometry(120, 30, 30, 20);
    a_delimiter = new QLabel("+ i ", this);
    a_delimiter->setGeometry(150, 30, 20, 20);
    a_im = new QLineEdit(this);
    a_im->setGeometry(170, 30, 30, 20);

    b_name = new QLabel("b = ", this);
    b_name->setGeometry(100, 60, 20, 20);
    b_re = new QLineEdit(this);
    b_re->setGeometry(120, 60, 30, 20);
    b_delimiter = new QLabel("+ i ", this);
    b_delimiter->setGeometry(150, 60, 20, 20);
    b_im = new QLineEdit(this);
    b_im->setGeometry(170, 60, 30, 20);

    x_name = new QLabel("x = ", this);
    x_name->setGeometry(100, 90, 20, 20);
    x_re = new QLineEdit(this);
    x_re->setGeometry(120, 90, 30, 20);
    x_delimiter = new QLabel("+ i ", this);
    x_delimiter->setGeometry(150, 90, 20, 20);
    x_im = new QLineEdit(this);
    x_im->setGeometry(170, 90, 30, 20);

    value_btn = new QPushButton("Вычислить значение в x", this);
    value_btn->setGeometry(100, 250, 200, 30);
    output = new QLabel(this);
    output->setGeometry(150, 350, 300, 50);

    connect(value_btn, SIGNAL(pressed()), this, SLOT(value()));
}

TInterface::~TInterface()
{
    delete value_btn;
    delete output;

    delete a_name;
    delete a_delimiter;
    delete a_re;
    delete a_im;
}

void TInterface::value()
{
    number a = number(a_re->text().toDouble(), a_im->text().toDouble());
    number b = number(b_re->text().toDouble(), b_im->text().toDouble());
    number x = number(x_re->text().toDouble(), x_im->text().toDouble());
    number roots[] = {b};
    TPolinom pol(a, roots, 1);
    QString s;
    s<<pol.count_value(x);
    output->setText(s);
}
