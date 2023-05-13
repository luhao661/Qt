
#include "widget.h"

#include <QApplication>
#include <QPushButton>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();
//    return a.exec();

    QObject* btn=new QPushButton;
    qDebug()<<btn->metaObject()->className();

    QPushButton *btnPush=qobject_cast<QPushButton*> (btn);
//    qDebug()<<btnPush->metaObject()->className();
    QString str=btnPush->metaObject()->className();
    qDebug()<<str;
}
