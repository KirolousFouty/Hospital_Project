#ifndef USERLOGINWINDOW_H
#define USERLOGINWINDOW_H

#include "patient.h"
#include "userregisterwindow.h"
#include <QDialog>

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

private slots:
    void on_registerButton_clicked();

private:
    Ui::UserLoginWindow *ui;
};

#endif // USERLOGINWINDOW_H
