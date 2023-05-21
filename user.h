#ifndef USER_H
#define USER_H
#include <QMainWindow>
#include <QVector>

class user
{
public:
    bool findUserAccount(QString & account);
    bool findUserPassword(QString & password);
    void addUser(QString & account,QString & password);
    user();
    QVector<QString>  vAccount;
    QVector<QString>  vPassword;
    int cnt;
};

#endif // USER_H
