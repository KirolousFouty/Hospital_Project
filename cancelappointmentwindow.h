#ifndef CANCELAPPOINTMENTWINDOW_H
#define CANCELAPPOINTMENTWINDOW_H

#include <QDialog>
#include <QVector>
#include "Appointment.h"

namespace Ui {
class CancelAppointmentWindow;
}

class CancelAppointmentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CancelAppointmentWindow(QWidget *parent = nullptr);
    ~CancelAppointmentWindow();
    QVector<Appointment> *appointmentsLog;
    QVector<Appointment> *cancelledAppointmentsLog;

private slots:
    void on_showAppointmentsButton_clicked();

    void on_cancelSelectedAppointmentButton_clicked();

private:
    Ui::CancelAppointmentWindow *ui;
};

#endif // CANCELAPPOINTMENTWINDOW_H
