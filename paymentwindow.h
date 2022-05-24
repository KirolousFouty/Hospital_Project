#ifndef PAYMENTWINDOW_H
#define PAYMENTWINDOW_H

#include <QDialog>
#include <QVector>
#include <QMessageBox>
#include <QDebug>
#include <iostream>
#include <fstream>
#include <algorithm>

#include "Patient.h"
#include "Doctor.h"

namespace Ui {
class PaymentWindow;
}

class PaymentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PaymentWindow(QWidget *parent = nullptr);
    ~PaymentWindow();
    Patient *p;
    QVector<Doctor> *arrDoc;
    fstream paymentsLogFile;
    QString docName;
    QString appTime;
    bool *isPaymentSuccessfull;
    bool isDone;

private slots:
    void on_showCurrentDataButton_clicked();

    void on_backButton_clicked();

    void on_payButton_clicked();

private:
    Ui::PaymentWindow *ui;
};

#endif // PAYMENTWINDOW_H
