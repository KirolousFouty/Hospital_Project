#ifndef USERREGISTERWINDOW_H
#define USERREGISTERWINDOW_H

#include "patient.h"
#include <QDialog>
#include <QCloseEvent>

namespace Ui {
class UserRegisterWindow;
}

class UserRegisterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserRegisterWindow(QWidget *parent = nullptr);
    ~UserRegisterWindow();

private slots:
    void on_registerButton_clicked();

    void on_backButton_clicked();

private:
    Ui::UserRegisterWindow *ui;
};

#endif // USERREGISTERWINDOW_H
