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

    write_mode = new QLabel("Введите an", this);
    write_mode->setGeometry(100, 10, 150, 20);
    write_mode->hide();

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

    new_size_name = new QLabel("Новый размер - ", this);
    new_size_name->setGeometry(100, 30, 120, 20);
    new_size_value = new QLineEdit(this);
    new_size_value->setGeometry(220, 30, 30, 20);
    new_size_name->hide();
    new_size_value->hide();

    value_btn = new QPushButton("Вычислить значение в x", this);
    value_btn->setGeometry(50, 250, 200, 30);
    change_an_btn = new QPushButton("Изменить an", this);
    change_an_btn->setGeometry(260, 250, 150, 30);
    print_btn = new QPushButton("Вывести полином", this);
    print_btn->setGeometry(420, 250, 150, 30);
    write_btn = new QPushButton("Ввести полином", this);
    write_btn->setGeometry(580, 250, 150, 30);
    change_size_btn = new QPushButton("Изменить размер", this);
    change_size_btn->setGeometry(740, 250, 150, 30);

    submit_value_btn = new QPushButton("Применить", this);
    submit_value_btn->setGeometry(200, 150, 150, 30);
    submit_value_btn->hide();
    submit_an_btn = new QPushButton("Применить", this);
    submit_an_btn->setGeometry(200, 150, 150, 30);
    submit_an_btn->hide();
    submit_print_btn = new QPushButton("Применить", this);
    submit_print_btn->setGeometry(200, 150, 150, 30);
    submit_print_btn->hide();
    submit_write_btn = new QPushButton("Далее", this);
    submit_write_btn->setGeometry(200, 150, 150, 30);
    submit_write_btn->hide();
    submit_change_size_btn = new QPushButton("Применить", this);
    submit_change_size_btn->setGeometry(200, 150, 150, 30);
    submit_change_size_btn->hide();

    print_mode = new QComboBox(this);
    print_mode->addItem("Классический");
    print_mode->addItem("Канонический");
    print_mode->setGeometry(100, 30, 130, 20);
    print_mode->hide();

    output = new QLabel(this);
    output->setGeometry(150, 350, 300, 50);

    connect(value_btn, SIGNAL(pressed()), this, SLOT(value()));
    connect(change_an_btn, SIGNAL(pressed()), this, SLOT(change_an()));
    connect(print_btn, SIGNAL(pressed()), this, SLOT(print()));
    connect(write_btn, SIGNAL(pressed()), this, SLOT(write()));
    connect(change_size_btn, SIGNAL(pressed()), this, SLOT(change_size()));
    connect(submit_an_btn, SIGNAL(pressed()), this, SLOT(imp_change_an()));
    connect(submit_value_btn, SIGNAL(pressed()), this, SLOT(imp_value()));
    connect(submit_print_btn, SIGNAL(pressed()), this, SLOT(imp_print()));
    connect(submit_write_btn, SIGNAL(pressed()), this, SLOT(write()));
    connect(submit_change_size_btn, SIGNAL(pressed()), this, SLOT(imp_change_size()));
}

TInterface::~TInterface()
{
    delete value_btn;
    delete change_an_btn;
    delete print_btn;
    delete write_btn;
    delete change_size_btn;

    delete submit_an_btn;
    delete submit_value_btn;
    delete submit_print_btn;
    delete submit_write_btn;
    delete submit_change_size_btn;

    delete print_mode;

    delete output;

    delete a_name;
    delete a_delimiter;
    delete a_re;
    delete a_im;

    delete write_mode;

    delete x_name;
    delete x_delimiter;
    delete x_re;
    delete x_im;

    delete an_name;
    delete an_delimiter;
    delete an_re;
    delete an_im;

    delete new_size_name;
    delete new_size_value;
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

void TInterface::print()
{
    output->setText("");
    print_mode->show();
    submit_print_btn->show();
}

void TInterface::imp_print()
{
    if (print_mode->currentText() == "Классический")
        main_pol.set_print_mode(EPrintModeClassic);
    else
        main_pol.set_print_mode(EPrintModeCanonic);
    QString s;
    s << main_pol;
    output->setText(s);
    print_mode->hide();
    submit_print_btn->hide();
}

void TInterface::write()
{
    QString s = write_mode->text();
    int i = 0;

    if (s == "Введите an" && a_re->text() == "")
    {
        output->setText("");
        submit_write_btn->show();
        a_name->show();
        a_re->show();
        a_delimiter->show();
        a_im->show();
        write_mode->show();
    }

    if (s == "Введите an" && a_re->text() != "")
    {
        main_pol.change_an(number(a_re->text().toDouble(), a_im->text().toDouble()));
        write_mode->setText("Введите корень 1");
        a_re->setText("");
        a_im->setText("");
    }

    if (s != "Введите an")
    {
        s.remove(0, 15);
        i = s.toInt();
        main_pol.change_root(number(a_re->text().toDouble(), a_im->text().toDouble()), i-1);
        s = "Введите корень ";
        s += QString().setNum(i+1);
        write_mode->setText(s);
        a_re->setText("");
        a_im->setText("");
    }

    if (i == main_pol.get_size())
    {
        submit_write_btn->hide();
        a_name->hide();
        a_re->hide();
        a_delimiter->hide();
        a_im->hide();
        write_mode->hide();
        write_mode->setText("Введите an");
        a_re->setText("");
        a_im->setText("");
        output->setText("Полином изменен");
        return;
    }
}

void TInterface::change_size()
{
    output->setText("");
    new_size_name->show();
    new_size_value->show();
    submit_change_size_btn->show();
}

void TInterface::imp_change_size()
{
    main_pol.change_size(new_size_value->text().toInt());
    output->setText("Размер изменен");
    new_size_name->hide();
    new_size_value->hide();
    submit_change_size_btn->hide();
}
