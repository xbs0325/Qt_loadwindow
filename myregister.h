#ifndef MYREGISTER_H
#define MYREGISTER_H

#include <QMainWindow>
#include <user.h>
#include <QMessageBox>

namespace Ui {
class myRegister;
}

class myRegister : public QMainWindow
{
    Q_OBJECT

public:
    explicit myRegister(user* u,QWidget *parent = nullptr);
    ~myRegister();

private:
    Ui::myRegister *ui;
};

#endif // MYREGISTER_H
