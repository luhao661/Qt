
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
    quint8 m_age=10;
    //分数
    quint8 m_score=79;
};

#endif // TPERSON_H
