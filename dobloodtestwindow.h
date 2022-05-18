#ifndef DOBLOODTESTWINDOW_H
#define DOBLOODTESTWINDOW_H

#include <QDialog>
#include <ctime>
#include <QMessageBox>
#include "Patient.h"

namespace Ui
{
    class doBloodTestWindow;
}

class doBloodTestWindow : public QDialog
{
    Q_OBJECT

public:
    explicit doBloodTestWindow(QWidget *parent = nullptr);
    ~doBloodTestWindow();
    Patient *p;

private slots:
    void on_submitSampleButton_clicked();

    void on_checkDiscountButton_clicked();

private:
    Ui::doBloodTestWindow *ui;
};

#endif // DOBLOODTESTWINDOW_H
