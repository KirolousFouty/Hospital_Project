#ifndef USERLOGINWINDOW_H
#define USERLOGINWINDOW_H

#include "Patient.h"
#include "userregisterwindow.h"
#include <QDialog>
#include <map>

namespace Ui
{
    class UserLoginWindow;
}

class UserLoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserLoginWindow(QWidget *parent = nullptr);
    ~UserLoginWindow();
    Patient *p;

private slots:
    void on_registerButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::UserLoginWindow *ui;
};

#endif // USERLOGINWINDOW_H
