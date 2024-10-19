#include "interface.h"

TInterface::TInterface(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Практика №4");
    setFixedSize(1000, 500);

    main_pol.change_size(2);
    main_pol.change_an(1);
    main_pol.change_root(2, 0);
    main_pol.change_root(3, 1);

    a_name = new QLabel("a = ", this);
    a_name->setGeometry(100, 30, 20, 20);
    a_re = new QLineEdit(this);
    a_re->setGeometry(120, 30, 30, 20);
    a_delimiter = new QLabel("+ i ", this);
    a_delimiter->setGeometry(150, 30, 20, 20);
    a_im = new QLineEdit(this);
    a_im->setGeometry(170, 30, 30, 20);
    a_name->hide();
    a_re->hide();
    a_delimiter->hide();
    a_im->hide();

    an_name = new QLabel("a = ", this);
    an_name->setGeometry(100, 30, 20, 20);
    an_re = new QLineEdit(this);
    an_re->setGeometry(120, 30, 30, 20);
    an_delimiter = new QLabel("+ i ", this);
    an_delimiter->setGeometry(150, 30, 20, 20);
    an_im = new QLineEdit(this);
    an_im->setGeometry(170, 30, 30, 20);
    an_name->hide();
    an_re->hide();
    an_delimiter->hide();
    an_im->hide();

    x_name = new QLabel("x = ", this);
    x_name->setGeometry(100, 30, 20, 20);
    x_re = new QLineEdit(this);
    x_re->setGeometry(120, 30, 30, 20);
    x_delimiter = new QLabel("+ i ", this);
    x_delimiter->setGeometry(150, 30, 20, 20);
    x_im = new QLineEdit(this);
    x_im->setGeometry(170, 30, 30, 20);
    x_name->hide();
    x_re->hide();
    x_delimiter->hide();
    x_im->hide();

    value_btn = new QPushButton("Вычислить значение в x", this);
    value_btn->setGeometry(50, 250, 200, 30);
    change_an_btn = new QPushButton("Изменить an", this);
    change_an_btn->setGeometry(260, 250, 150, 30);

    submit_value_btn = new QPushButton("Применить", this);
    submit_value_btn->setGeometry(200, 150, 150, 30);
    submit_value_btn->hide();
    submit_an_btn = new QPushButton("Применить", this);
    submit_an_btn->setGeometry(200, 150, 150, 30);
    submit_an_btn->hide();

    output = new QLabel(this);
    output->setGeometry(150, 350, 300, 50);

    connect(value_btn, SIGNAL(pressed()), this, SLOT(value()));
    connect(change_an_btn, SIGNAL(pressed()), this, SLOT(change_an()));
    connect(submit_an_btn, SIGNAL(pressed()), this, SLOT(imp_change_an()));
    connect(submit_value_btn, SIGNAL(pressed()), this, SLOT(imp_value()));
}

TInterface::~TInterface()
{
    delete value_btn;
    delete change_an_btn;

    delete submit_an_btn;
    delete submit_value_btn;

    delete output;

    delete a_name;
    delete a_delimiter;
    delete a_re;
    delete a_im;
    delete x_name;
    delete x_delimiter;
    delete x_re;
    delete x_im;

    delete an_name;
    delete an_delimiter;
    delete an_re;
    delete an_im;
}

void TInterface::value()
{
    output->setText("");
    x_name->show();
    x_re->show();
    x_delimiter->show();
    x_im->show();
    submit_value_btn->show();
}

void TInterface::imp_value()
{
    number x = number(x_re->text().toDouble(), x_im->text().toDouble());
    QString s;
    s << main_pol.count_value(x);
    output->setText(s);
    x_name->hide();
    x_re->hide();
    x_delimiter->hide();
    x_im->hide();
    submit_value_btn->hide();
}

void TInterface::change_an()
{
    output->setText("");
    an_name->show();
    an_re->show();
    an_delimiter->show();
    an_im->show();
    submit_an_btn->show();
}

void TInterface::imp_change_an()
{
    number new_an = number(an_re->text().toDouble(), an_im->text().toDouble());
    main_pol.change_an(new_an);
    QString s;
    s << main_pol;
    output->setText(s);
    an_name->hide();
    an_re->hide();
    an_delimiter->hide();
    an_im->hide();
    submit_an_btn->hide();
}
