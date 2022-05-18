#ifndef BOOKAPPOINTMENTWINDOW_H
#define BOOKAPPOINTMENTWINDOW_H

#include <QDialog>
#include <QVector>
#include <QMessageBox>

#include "Appointment.h"
#include "Doctor.h"

namespace Ui
{
    class BookAppointmentWindow;
}

class BookAppointmentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BookAppointmentWindow(QWidget *parent = nullptr);
    ~BookAppointmentWindow();

    Patient *p;
    QVector<Appointment> *appointmentsLog;
    QVector<Doctor> *arrDoc;

private slots:
    void on_confirmAppointmentButton_clicked();

    void on_selectDepartmentButton_clicked();

    void on_selectDoctorButton_clicked();

    void on_backButton_clicked();

private:
    Ui::BookAppointmentWindow *ui;
};

#endif // BOOKAPPOINTMENTWINDOW_H
