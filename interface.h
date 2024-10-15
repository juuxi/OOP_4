#ifndef TINTERFACE_H
#define TINTERFACE_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include "polinom.h"

class TInterface : public QWidget
{
    Q_OBJECT

    QLabel *a_name, *a_delimiter;
    QLineEdit *a_re, *a_im;
    QLabel *b_name, *b_delimiter;
    QLineEdit *b_re, *b_im;
    QLabel *x_name, *x_delimiter;
    QLineEdit *x_re, *x_im;
    QPushButton* value_btn;
    QLabel* output;

public:
    TInterface(QWidget *parent = nullptr);
    ~TInterface();

public slots:
    void value();
};
#endif // TINTERFACE_H
