
#include "widget.h"
#include "ui_widget.h"
#include "tperson.h"

#include <QMetaProperty>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建boy和girl时，使用this即Widget作为它们的父对象
    //当Widget对象被删除时，boy和girl会被自动删除
    boy=new TPerson("小明",this);
    girl=new TPerson("小丽",this);

    //***注***
    //窗口中boy和girl的spin前面的value数字的值与
    //TPerson类的m_age值无关联，因此要在此处设置
    //和窗口中初始时显示的数字一样的数字
    boy->setAge(20);
    girl->setAge(16);
//    boy->setProperty("age",20);

    //为了打印是男生还是女生的年龄，这里需要动态属性
    boy->setProperty("sex","boy");
    girl->setProperty("sex","girl");

    //查看boy的元对象信息的属性名score的属性值为0，这边
    //可以进行设置，设置为70
    boy->setProperty("score",75);


    //为了辨别是男孩还是女孩的spin的值改变，
    //这里就需要有动态属性
    ui->spinboy->setProperty("isBoy",true);
    ui->spingirl->setProperty("isBoy",false);

    //qspinbox.h中声明了valueChanged信号
    connect(ui->spinboy,SIGNAL(valueChanged(int)),this,
            SLOT(do_spinChanged(int)));
    connect(ui->spingirl,SIGNAL(valueChanged(int)),this,
            SLOT(do_spinChanged(int)));

    //tperson.h中声明了ageChanged信号
    connect(boy,SIGNAL(ageChanged(int)),this,
            SLOT(do_ageChanged(int)));
    connect(girl,SIGNAL(ageChanged(int)),this,
            SLOT(do_ageChanged(int)));

    //实现按btn后年龄增加，同时spin中显示的数字也同步增加
    connect(boy,SIGNAL(ageChanged(int)),ui->spinboy,
            SLOT(setValue(int)));
    connect(girl,SIGNAL(ageChanged(int)),ui->spingirl,
            SLOT(setValue(int)));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_ageChanged(int value)
{
    TPerson* person=qobject_cast<TPerson*>(sender());

    QString str=QString("姓名=%1，性别=%2，年龄=%3")
                      .arg(person->property("name").toString())
                      .arg(
                          (person->property("sex").toString()=="boy")
                          ?"男孩":"女孩"
                          )
                      .arg(value);

    //***注***
    //TPerson类没有声明并定义返回m_name的内容的函数，
    //那么person指针就不能访问m_name这个私有数据成员
    //这时，Qt的属性系统就提供了一种访问途径
    //TPerson头文件有写Q_PROPERTY(QString name MEMBER m_name)


    ui->plainTextEdit->appendPlainText(str);
}

void Widget::do_spinChanged(int arg1)
{
    //QObject类的sender()方法能提供指向信号的发送者的指针
    QSpinBox* spinbox=qobject_cast<QSpinBox*>(sender());

    //问题：pinbox类的valueChanged没有办法能辨别
    //是男孩的年龄改变还是女孩的年龄改变
    //解决方法：动态属性
    if(spinbox->property("isBoy").toBool())
    {
        boy->setAge(arg1);
    }
    else
        girl->setAge(arg1);
}


void Widget::on_btn_boy_inc_clicked()
{
    boy->incAge();
}


void Widget::on_btn_girl_inc_clicked()
{
    girl->incAge();
}


void Widget::on_btn_clear_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_btn_meta_info_clicked()
{
    QObject *obj=boy;
//    QObject *obj=ui->spinboy;

    const QMetaObject* meta=obj->metaObject();

    ui->plainTextEdit->appendPlainText(
        QString("类名称：%1\n").arg(meta->className()  )  );


    ui->plainTextEdit->appendPlainText(QString("属性："));

    for(int i=meta->propertyOffset();i<meta->propertyCount();i++)
    {
        const char* proName=meta->property(i).name();
        QString proValue=boy->property(proName).toString();
        ui->plainTextEdit->appendPlainText(
            QString("属性名称=%1，属性值=%2")
                .arg(proName).arg(proValue));
    }

    ui->plainTextEdit->appendPlainText(QString("\n类信息："));

    for(int i=meta->classInfoOffset();i<meta->classInfoCount();i++)
    {
        QMetaClassInfo classInfo=meta->classInfo(i);
        ui->plainTextEdit->appendPlainText(
            QString("%1，%2").arg(classInfo.name()).arg(classInfo.value()));
    }
}

