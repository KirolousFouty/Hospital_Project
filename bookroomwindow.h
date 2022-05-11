#ifndef BOOKROOMWINDOW_H
#define BOOKROOMWINDOW_H

#include "userregisterwindow.h"
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"

#include <QDialog>
#include <QVector>

namespace Ui {
class BookRoomWindow;
}

class BookRoomWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BookRoomWindow(QWidget *parent = nullptr);
    ~BookRoomWindow();

    Patient *p;
    QVector<Appointment> *appointmentsLog;
    QVector<Doctor> *arrDoc;

private slots:
    void on_selectDepartmentButton_clicked();

private:
    Ui::BookRoomWindow *ui;
};

#endif // BOOKROOMWINDOW_H
