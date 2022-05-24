#ifndef USERLOGINWINDOW_H
#define USERLOGINWINDOW_H

#include "Patient.h"
#include "userregisterwindow.h"
#include "usereditwindow.h"

#include <QDialog>
#include <map>
#include <QVector>
#include <QLabel>

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
    QVector<Appointment> *appointmentsLog;
    QVector<Doctor> *arrDoc;
    QLabel *p_userLoginTitle;

private slots:
    void on_registerButton_clicked();

    void on_loginButton_clicked();

    void on_backButton_clicked();

    void on_editButton_clicked();

private:
    Ui::UserLoginWindow *ui;
};

#endif // USERLOGINWINDOW_H
