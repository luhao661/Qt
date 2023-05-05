
#include "dialog.h"

//以下头文件没必要放在.h文件中，这个.cpp文件用到了才写上，这样比较好
#include <QHBoxLayout>
#include <QVBoxLayout>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    checkBoxUnder=new QCheckBox("Underline");
    checkBoxItalic=new QCheckBox("Italic");
    checkBoxBold=new QCheckBox("Bold");

    QHBoxLayout* Hlay1=new QHBoxLayout();

    Hlay1->addWidget(checkBoxUnder);
    Hlay1->addWidget(checkBoxItalic);
    Hlay1->addWidget(checkBoxBold);

    radioBlack=new QRadioButton("黑色");
    radioRed=new QRadioButton("红色");
    radioBlue=new QRadioButton("蓝色");

    QHBoxLayout* Hlay2=new QHBoxLayout;

    Hlay2->addWidget(radioBlack);
    Hlay2->addWidget(radioRed);
    Hlay2->addWidget(radioBlue);


    setLayout(Hlay1);
    setLayout(Hlay2);
}

Dialog::~Dialog()
{
}


