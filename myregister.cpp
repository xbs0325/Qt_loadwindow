#include "myregister.h"
#include "ui_myregister.h"

myRegister::myRegister(user* u,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myRegister)
{
    ui->setupUi(this);
    connect(ui->pushButtonRegister,&QPushButton::clicked,this,[=](){
        QString account = ui->lineEditAccount->text();
        QString password = ui->lineEditPassword->text();
        QString password2 = ui->lineEditPassword2->text();
        if(password != password2)
        {
            QMessageBox::critical(this,"错误","密码前后不一致");
        }
        else
        {
            if(u->findUserAccount(account))
            {
                QMessageBox::critical(this,"错误","账号已存在");
            }
            else
            {
                u->addUser(account,password);
                QMessageBox::StandardButton result = QMessageBox::information(this,"提示","注册成功");
                if(result)
                    this->close();
            }
        }
    });
    connect(ui->pushButtonCancel,&QPushButton::clicked,this,[=](){
        this->close();
    });
}

myRegister::~myRegister()
{
    delete ui;
}
