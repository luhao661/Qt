
#include "dialog.h"

//以下头文件没必要放在.h文件中，这个.cpp文件用到了才写上，这样比较好
#include <QHBoxLayout>
#include <QVBoxLayout>

void Dialog::do_chkBoxUnder(bool checked)
{
    QFont font=plainTextEdit->font();
    font.setUnderline(checked);
    plainTextEdit->setFont(font);
}

void Dialog::do_chkBoxItalic(bool checked)
{
    QFont font=plainTextEdit->font();
    font.setItalic(checked);
    plainTextEdit->setFont(font);
}

void Dialog::do_chkBoxBold(bool checked)
{
    QFont font=plainTextEdit->font();
    font.setBold(checked);
    plainTextEdit->setFont(font);
}

void Dialog::do_setFontColor()
{
    QPalette plet=plainTextEdit->palette();

    if(radioBlack->isChecked())
        plet.setColor(QPalette::Text,Qt::black);
    else  if(radioRed->isChecked())
        plet.setColor(QPalette::Text,Qt::red);
    else  if(radioBlue->isChecked())
        plet.setColor(QPalette::Text,Qt::blue);

    plainTextEdit->setPalette(plet);
}

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    checkBoxUnder=new QCheckBox("Underline");
    checkBoxItalic=new QCheckBox("Italic");
    checkBoxBold=new QCheckBox("Bold");

    //水平布局的组件
    QHBoxLayout* Hlay1=new QHBoxLayout();

    Hlay1->addWidget(checkBoxUnder);
    Hlay1->addWidget(checkBoxItalic);
    Hlay1->addWidget(checkBoxBold);

    radioBlack=new QRadioButton("黑色");
    radioRed=new QRadioButton("红色");
    radioBlue=new QRadioButton("蓝色");

    //水平布局的组件
    QHBoxLayout* Hlay2=new QHBoxLayout;

    Hlay2->addWidget(radioBlack);
    Hlay2->addWidget(radioRed);
    Hlay2->addWidget(radioBlue);

    //垂直布局的组件
    QVBoxLayout* Vlay1=new QVBoxLayout;
    Vlay1->addLayout(Hlay1);
    Vlay1->addLayout(Hlay2);

    //文本框
    plainTextEdit=new QPlainTextEdit{"Hello （手工创建）"};

    QFont font=plainTextEdit->font();
    font.setPointSize(20);
    plainTextEdit->setFont(font);

    Vlay1->addWidget(plainTextEdit);


    btnOK=new QPushButton("确定");
    btnCancel=new QPushButton("取消");
    btnClose=new QPushButton("关闭");

    //水平布局的组件
    QHBoxLayout* Hlay3=new QHBoxLayout;
    Hlay3->addStretch();
    Hlay3->addWidget(btnOK);
    Hlay3->addWidget(btnCancel);
    Hlay3->addStretch();
    Hlay3->addWidget(btnClose);

    Vlay1->addLayout(Hlay3);

    setLayout(Vlay1);

    //信号与槽相关联
    connect(checkBoxUnder,SIGNAL(clicked(bool)),this,
            SLOT(do_chkBoxUnder(bool)));
    connect(checkBoxItalic,SIGNAL(clicked(bool)),this,
            SLOT(do_chkBoxItalic(bool)));
    connect(checkBoxBold,SIGNAL(clicked(bool)),this,
            SLOT(do_chkBoxBold(bool)));

    connect(radioBlack,SIGNAL(clicked()),this,SLOT(do_setFontColor()));
    connect(radioBlue,SIGNAL(clicked()),this,SLOT(do_setFontColor()));
    connect(radioRed,SIGNAL(clicked()),this,SLOT(do_setFontColor()));

    connect(btnOK,SIGNAL(clicked()),this,SLOT(accept()));
    connect(btnCancel,SIGNAL(clicked()),this,SLOT(reject()));
    connect(btnClose,SIGNAL(clicked()),this,SLOT(close()));

    setWindowTitle("手工打造UI");
}

Dialog::~Dialog()
{
}


