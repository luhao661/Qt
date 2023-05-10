
#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QObject::connect(ui->radioBlack,SIGNAL(clicked()),
                     this,SLOT(do_setFontColor()));
    QObject::connect(ui->radioRed,SIGNAL(clicked()),
                     this,SLOT(do_setFontColor()));
    QObject::connect(ui->radioBlue,SIGNAL(clicked()),
                     this,SLOT(do_setFontColor()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnClear_clicked()
{
    //通过dialog.h中的Dialog类中的私有数据成员ui，
    //可以访问Ui_Dialog类中的共有数据成员
    //(ui指向ui_dialog.h中的Ui_Dialog类，可以理解为ui这个指针
    //存着Ui_Dialog类对象的地址，ui可以访问该类的共有部分)
    ui->plainTextEdit->clear();
}

void Dialog::on_checkBoxUnder_clicked(bool checked)
{
    //创建字体对象，并赋值为获取当前的字体信息

//写法一：
//    QFont font=ui->plainTextEdit->font();

//写法二：
    QFont font;
    font=ui->plainTextEdit->font();

    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_checkBoxItalic_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_checkBoxBold_clicked(bool checked)
{
    QFont font=ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}

//使用自定义的槽函数
void Dialog::do_setFontColor()
{
    QPalette plet=ui->plainTextEdit->palette();

    if(ui->radioBlack->isChecked())
        plet.setColor(QPalette::Text,Qt::black);
    else if(ui->radioBlue->isChecked())
        plet.setColor(QPalette::Text,Qt::blue);
    else if(ui->radioRed->isChecked())
        plet.setColor(QPalette::Text,Qt::red);
    else
        plet.setColor(QPalette::Text,Qt::black);

    //***注***
    //setColor(ColorRole acr, const QColor &acolor)
    //第一个实参需要是ColorRole类型，查看后得知
    //ColorRole是类内的枚举类型名，作用域为QPalette类
    //要使用枚举类型值的话要用该类的类名加上作用域解析运算符
    //第二个实参要是QColor类型，查看后得知
    //QColor是个类，那么实参就需要是个QColor对象，
    //看到QColor类的构造函数
    //QColor(Qt::GlobalColor color) noexcept;
    //查看Qt类中的GlobalColor，看到GlobalColor
    //是Qt类中的枚举名，因此要使用GlobalColor的
    //枚举值就要以Qt::black这样的写法写

    ui->plainTextEdit->setPalette(plet);
}



