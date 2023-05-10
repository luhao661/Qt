/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxUnder;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioBlack;
    QRadioButton *radioRed;
    QRadioButton *radioBlue;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnExit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(488, 549);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBoxUnder = new QCheckBox(groupBox);
        checkBoxUnder->setObjectName(QString::fromUtf8("checkBoxUnder"));

        horizontalLayout->addWidget(checkBoxUnder);

        checkBoxItalic = new QCheckBox(groupBox);
        checkBoxItalic->setObjectName(QString::fromUtf8("checkBoxItalic"));

        horizontalLayout->addWidget(checkBoxItalic);

        checkBoxBold = new QCheckBox(groupBox);
        checkBoxBold->setObjectName(QString::fromUtf8("checkBoxBold"));

        horizontalLayout->addWidget(checkBoxBold);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioBlack = new QRadioButton(groupBox_2);
        radioBlack->setObjectName(QString::fromUtf8("radioBlack"));
        radioBlack->setChecked(false);
        radioBlack->setAutoRepeat(false);

        horizontalLayout_2->addWidget(radioBlack);

        radioRed = new QRadioButton(groupBox_2);
        radioRed->setObjectName(QString::fromUtf8("radioRed"));
        radioRed->setChecked(false);
        radioRed->setAutoRepeat(false);

        horizontalLayout_2->addWidget(radioRed);

        radioBlue = new QRadioButton(groupBox_2);
        radioBlue->setObjectName(QString::fromUtf8("radioBlue"));
        radioBlue->setChecked(false);
        radioBlue->setAutoRepeat(false);

        horizontalLayout_2->addWidget(radioBlue);


        verticalLayout->addWidget(groupBox_2);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        QFont font;
        font.setPointSize(20);
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnClear = new QPushButton(Dialog);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/212.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClear->setIcon(icon);

        horizontalLayout_3->addWidget(btnClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOK = new QPushButton(Dialog);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/322.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon1);

        horizontalLayout_3->addWidget(btnOK);

        btnExit = new QPushButton(Dialog);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/images/324.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon2);

        horizontalLayout_3->addWidget(btnExit);


        verticalLayout->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(btnClear, btnOK);
        QWidget::setTabOrder(btnOK, btnExit);
        QWidget::setTabOrder(btnExit, radioRed);
        QWidget::setTabOrder(radioRed, radioBlue);
        QWidget::setTabOrder(radioBlue, checkBoxItalic);
        QWidget::setTabOrder(checkBoxItalic, checkBoxBold);
        QWidget::setTabOrder(checkBoxBold, radioBlack);
        QWidget::setTabOrder(radioBlack, checkBoxUnder);
        QWidget::setTabOrder(checkBoxUnder, plainTextEdit);

        retranslateUi(Dialog);
        QObject::connect(btnOK, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(btnExit, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\344\277\241\345\217\267\344\270\216\346\247\275\347\232\204\344\275\277\347\224\250", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dialog", "\345\255\227\344\275\223", nullptr));
        checkBoxUnder->setText(QCoreApplication::translate("Dialog", "Underline", nullptr));
        checkBoxItalic->setText(QCoreApplication::translate("Dialog", "Italic", nullptr));
        checkBoxBold->setText(QCoreApplication::translate("Dialog", "Bold", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Dialog", "\351\242\234\350\211\262", nullptr));
        radioBlack->setText(QCoreApplication::translate("Dialog", "Black", nullptr));
        radioRed->setText(QCoreApplication::translate("Dialog", "Red", nullptr));
        radioBlue->setText(QCoreApplication::translate("Dialog", "Blue", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Dialog", "Qt 6 C++\n"
"\345\274\200\345\217\221\346\214\207\345\215\227", nullptr));
        btnClear->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272", nullptr));
        btnOK->setText(QCoreApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        btnExit->setText(QCoreApplication::translate("Dialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
