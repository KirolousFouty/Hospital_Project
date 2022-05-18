#ifndef BOOKHOMEVISITWINDOW_H
#define BOOKHOMEVISITWINDOW_H

#include <QDialog>
#include <QVector>
#include <QMessageBox>
#include "Patient.h"
#include "HomeVisit.h"

namespace Ui
{
    class bookHomeVisitWindow;
}

class bookHomeVisitWindow : public QDialog
{
    Q_OBJECT

public:
    explicit bookHomeVisitWindow(QWidget *parent = nullptr);
    ~bookHomeVisitWindow();
    Patient *p;
    QVector<HomeVisit> *homeVisitLog;

private slots:
    void on_confirmHomeVisitButton_clicked();

    void on_backButton_clicked();

    void on_checkDiscountButton_clicked();

private:
    Ui::bookHomeVisitWindow *ui;
};

#endif // BOOKHOMEVISITWINDOW_H
