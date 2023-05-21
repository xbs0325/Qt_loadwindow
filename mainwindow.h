#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <user.h>
#include <QMainWindow>
#include <QLineEdit>
#include <QMessageBox>
#include <QDebug>
#include <myregister.h>
#include <userwindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
