#ifndef RECHARGEBALANCEWINDOW_H
#define RECHARGEBALANCEWINDOW_H

#include <QDialog>
#include "Patient.h"

namespace Ui
{
    class rechargeBalanceWindow;
}

class rechargeBalanceWindow : public QDialog
{
    Q_OBJECT

public:
    explicit rechargeBalanceWindow(QWidget *parent = nullptr);
    ~rechargeBalanceWindow();
    Patient *p;

private slots:
    void on_backButton_clicked();

    void on_depositButton_clicked();

    void on_withdrawButton_clicked();

    void on_showCurrentButton_clicked();

private:
    Ui::rechargeBalanceWindow *ui;
};

#endif // RECHARGEBALANCEWINDOW_H
