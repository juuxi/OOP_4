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
    change_an_btn = new QPushButton("Изменить an", this);
    change_an_btn->setGeometry(310, 250, 150, 30);

    submit_an_btn = new QPushButton("Применить", this);
    submit_an_btn->setGeometry(200, 150, 150, 30);
    submit_an_btn->hide();

    output = new QLabel(this);
    output->setGeometry(150, 350, 300, 50);

    connect(value_btn, SIGNAL(pressed()), this, SLOT(value()));
    connect(change_an_btn, SIGNAL(pressed()), this, SLOT(change_an()));
    connect(submit_an_btn, SIGNAL(pressed()), this, SLOT(imp_change_an()));
}

TInterface::~TInterface()
{
    delete value_btn;
    delete change_an_btn;

    delete submit_an_btn;

    delete output;

    delete a_name;
    delete a_delimiter;
    delete a_re;
    delete a_im;
    delete b_name;
    delete b_delimiter;
    delete b_re;
    delete b_im;
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
    number a = number(a_re->text().toDouble(), a_im->text().toDouble());
    number b = number(b_re->text().toDouble(), b_im->text().toDouble());
    number x = number(x_re->text().toDouble(), x_im->text().toDouble());
    number roots[] = {b};
    TPolinom pol(a, roots, 1);
    QString s;
    s<<pol.count_value(x);
    output->setText(s);
    a_name->hide();
    a_re->hide();
    a_delimiter->hide();
    a_im->hide();
    b_name->hide();
    b_re->hide();
    b_delimiter->hide();
    b_im->hide();
    x_name->hide();
    x_re->hide();
    x_delimiter->hide();
    x_im->hide();
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
