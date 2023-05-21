#include "user.h"

user::user()
{
    cnt = 0;
}

bool user::findUserAccount(QString & account)
{
    for(QVector<QString>::Iterator it = vAccount.begin();it != vAccount.end();it++)
    {
        if(account == *it)
        {
            return true;
        }
    }
    return false;
}

bool user::findUserPassword(QString & password)
{
    for(QVector<QString>::Iterator it = vPassword.begin();it != vPassword.end();it++)
    {
        if(password == *it)
        {
            return true;
        }
    }
    return false;
}

void user::addUser(QString & account,QString & password)
{
    this->vAccount << account;
    this->vPassword << password;
    cnt = this->vAccount.count();
}
