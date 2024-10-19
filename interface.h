#ifndef TINTERFACE_H
#define TINTERFACE_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QComboBox>
#include "polinom.h"

class TInterface : public QWidget
{
    Q_OBJECT

    QLabel *an_name, *an_delimiter;
    QLineEdit *an_re, *an_im;
    QLabel *a_name, *a_delimiter;
    QLineEdit *a_re, *a_im;
    QLabel *x_name, *x_delimiter;
    QLineEdit *x_re, *x_im;
    QPushButton* value_btn, *change_an_btn, *print_btn;
    QPushButton* submit_an_btn, *submit_value_btn, *submit_print_btn;
    QComboBox* print_mode;
    QLabel* output;

    TPolinom main_pol;

public:
    TInterface(QWidget *parent = nullptr);
    ~TInterface();

public slots:
    void value();
    void change_an();
    void print();
    void imp_value();
    void imp_change_an();
    void imp_print();
};
#endif // TINTERFACE_H
