
#ifndef TPERSON_H
#define TPERSON_H


#include <QObject>


class TPerson : public QObject
{
    //只有加上这个宏，才能使用信号与槽
    Q_OBJECT
    //添加类的信息，可以用作版权声明
    Q_CLASSINFO("author","Yan");
    Q_CLASSINFO("company","SUT");
    Q_CLASSINFO("verson","2.0.0");


    //Qt提供了一个绝妙的属性系统，
    //Q_PROPERTY()是一个宏，用来在一个类中
    //声明一个属性property，由于该宏是qt特有的，
    //需要用moc进行编译，故必须继承于QObject类。
    //Qt中类的属性是给脚本和元对象系统用的，
    //比如QtScript，QML，或者QObject::property/setProperty……，主
    //要就是用来进行属性封装，
    //在具体的脚本，库，qml开发中必须使用。

    //定义属性age
    Q_PROPERTY(int  age READ age WRITE
                   setAge NOTIFY ageChanged)
    //定义属性name
    Q_PROPERTY(QString name MEMBER m_name)
    //定义属性score
    Q_PROPERTY(int score MEMBER m_score)

public:
    explicit TPerson(QString name,QObject *parent = nullptr);
    ~TPerson();

    int age(void);

    void setAge(quint8 ageValue);

    void incAge(void);


signals:
    //自定义的信号，无需实现
    void ageChanged(int ageValue);

private:
    //性别(用动态属性)
    //QString_m_sex;

    //人名
    QString m_name;
    //年龄
    int m_age=10;
    //分数
    int m_score=79;
};

#endif // TPERSON_H
