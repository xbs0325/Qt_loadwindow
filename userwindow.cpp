#include "userwindow.h"
#include "ui_userwindow.h"

userWindow::userWindow(QString account,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userWindow)
{
    ui->setupUi(this);
    ui->label->setText("你好!用户"+account);
}

userWindow::~userWindow()
{
    delete ui;
}
