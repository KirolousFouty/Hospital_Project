#ifndef USERREGISTERWINDOW_H
#define USERREGISTERWINDOW_H

#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"

#include <QDialog>
#include <QCloseEvent>
#include <map>
#include <QVector>

namespace Ui
{
    class UserRegisterWindow;
}

class UserRegisterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserRegisterWindow(QWidget *parent = nullptr);
    ~UserRegisterWindow();

    Patient *p;
    QVector<Appointment> *appointmentsLog;
    QVector<Doctor> *arrDoc;

private slots:
    void on_registerButton_clicked();

    void on_backButton_clicked();

    void on_clearFieldsButton_clicked();

private:
    Ui::UserRegisterWindow *ui;
};

#endif // USERREGISTERWINDOW_H
