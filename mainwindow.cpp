#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    user * u = new user;
    ui->setupUi(this);
    QString MyAccount = QString::fromLocal8Bit("admin");
    QString MyPassword = QString::fromLocal8Bit("password");
    u->addUser(MyAccount,MyPassword);

    connect(ui->pushButtonLogin,&QPushButton::clicked,this,[=](){
        QString account = ui->lineEditAccount->text();
        QString password = ui->lineEditPassword->text();
        if(u->findUserAccount(account)&&u->findUserPassword(password))
        {
           QMessageBox::information(this,"登录","登陆成功");
           userWindow * uw =new userWindow(account);
           uw->show();
           uw->setAttribute(Qt::WA_DeleteOnClose);
        }
        else
        {
            QMessageBox::warning(this,"登录","登陆失败");
        }
    });

    connect(ui->pushButtonRegister,&QPushButton::clicked,this,[=](){
        myRegister* r = new myRegister(u,this);
        r->show();
        r->setAttribute(Qt::WA_DeleteOnClose);
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

