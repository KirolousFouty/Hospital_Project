#ifndef CONTACTUSWINDOW_H
#define CONTACTUSWINDOW_H

#include <QDialog>
#include <iostream>
#include <algorithm>
#include <QVector>
#include "Feedback.h"

namespace Ui {
class ContactUsWindow;
}

class ContactUsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ContactUsWindow(QWidget *parent = nullptr);
    ~ContactUsWindow();

    QVector<Feedback> *feedbackLog;


private slots:
    void on_submitButton_clicked();

private:
    Ui::ContactUsWindow *ui;
};

#endif // CONTACTUSWINDOW_H
