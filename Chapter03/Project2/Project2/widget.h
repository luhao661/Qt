
#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

//#include <tperson.h>
//或仅进行前向声明
class TPerson;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget

{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    TPerson* boy;
    TPerson* girl;

private slots:
    void do_ageChanged(int value);
    void do_spinChanged(int arg1);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
