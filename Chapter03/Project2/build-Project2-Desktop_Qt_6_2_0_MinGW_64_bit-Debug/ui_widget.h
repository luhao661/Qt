/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_boy;
    QSpinBox *spinboy;
    QPushButton *btn_boy_inc;
    QPushButton *btn_meta_info;
    QLabel *label_girl;
    QSpinBox *spingirl;
    QPushButton *btn_girl_inc;
    QPushButton *btn_clear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(430, 524);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_boy = new QLabel(Widget);
        label_boy->setObjectName(QString::fromUtf8("label_boy"));

        gridLayout->addWidget(label_boy, 0, 0, 1, 1);

        spinboy = new QSpinBox(Widget);
        spinboy->setObjectName(QString::fromUtf8("spinboy"));
        spinboy->setValue(20);

        gridLayout->addWidget(spinboy, 0, 1, 1, 1);

        btn_boy_inc = new QPushButton(Widget);
        btn_boy_inc->setObjectName(QString::fromUtf8("btn_boy_inc"));

        gridLayout->addWidget(btn_boy_inc, 0, 2, 1, 1);

        btn_meta_info = new QPushButton(Widget);
        btn_meta_info->setObjectName(QString::fromUtf8("btn_meta_info"));

        gridLayout->addWidget(btn_meta_info, 0, 3, 1, 1);

        label_girl = new QLabel(Widget);
        label_girl->setObjectName(QString::fromUtf8("label_girl"));

        gridLayout->addWidget(label_girl, 1, 0, 1, 1);

        spingirl = new QSpinBox(Widget);
        spingirl->setObjectName(QString::fromUtf8("spingirl"));
        spingirl->setValue(16);

        gridLayout->addWidget(spingirl, 1, 1, 1, 1);

        btn_girl_inc = new QPushButton(Widget);
        btn_girl_inc->setObjectName(QString::fromUtf8("btn_girl_inc"));

        gridLayout->addWidget(btn_girl_inc, 1, 2, 1, 1);

        btn_clear = new QPushButton(Widget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));

        gridLayout->addWidget(btn_clear, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\205\203\345\257\271\350\261\241\347\263\273\347\273\237demo", nullptr));
        label_boy->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\347\224\267\347\224\237\345\271\264\351\276\204", nullptr));
        btn_boy_inc->setText(QCoreApplication::translate("Widget", "\347\224\267\347\224\237\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btn_meta_info->setText(QCoreApplication::translate("Widget", "\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", nullptr));
        label_girl->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\345\245\263\347\224\237\345\271\264\351\276\204", nullptr));
        btn_girl_inc->setText(QCoreApplication::translate("Widget", "\345\245\263\347\224\237\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btn_clear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
