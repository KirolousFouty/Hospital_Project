#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "DateAndTime.h"
#include "UserLogin.h"
#include "HomeVisit.h"
#include "EmergencyRoom.h"
#include "EmergencyVisit.h"
#include "Room.h"
#include "Department.h"
#include "Doctor.h"
#include "Patient.h"
#include "OutpatientClinic.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
