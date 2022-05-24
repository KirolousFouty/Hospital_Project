#ifndef USEREDITWINDOW_H
#define USEREDITWINDOW_H

#include <QDialog>
#include <QMessageBox>

#include "Patient.h"

namespace Ui {
class UserEditWindow;
}

class UserEditWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserEditWindow(QWidget *parent = nullptr);
    ~UserEditWindow();

    Patient *p;

private slots:
    void on_clearFieldsButton_clicked();

    void on_editButton_clicked();

    void on_showButton_clicked();

    void on_backButton_clicked();

private:
    Ui::UserEditWindow *ui;
};

#endif // USEREDITWINDOW_H
