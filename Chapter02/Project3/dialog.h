
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

//用到打勾的正方形框
#include <QCheckBox>
//用到圆形的选项框
#include <QRadioButton>
//用到空白的文本框
#include <QPlainTextEdit>
//用到长方形的选项框
#include <QPushButton>

class Dialog : public QDialog

{
    Q_OBJECT

private:
    //三个指向CheckBox的指针，控制字体
    QCheckBox *checkBoxUnder;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;

    //三个指向RadioButton的指针，控制颜色
    QRadioButton *radioBlack;
    QRadioButton *radioRed;
    QRadioButton *radioBlue;

    //三个指向pushButton的指针
    QPushButton *btnOKr;
    QPushButton *btnCancel;
    QPushButton *btnClose;

    //文本框
    QPlainTextEdit *plainTextEdit;


public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};

#endif // DIALOG_H
