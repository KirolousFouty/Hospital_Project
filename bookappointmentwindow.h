#ifndef BOOKAPPOINTMENTWINDOW_H
#define BOOKAPPOINTMENTWINDOW_H

#include <QDialog>
#include "Appointment.h"

namespace Ui {
class BookAppointmentWindow;
}

class BookAppointmentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BookAppointmentWindow(QWidget *parent = nullptr);
    ~BookAppointmentWindow();
    QVector<Appointment> appointmentsLog;

private slots:
    void on_confirmAppointmentButton_clicked();

    void on_selectDepartmentButton_clicked();

private:
    Ui::BookAppointmentWindow *ui;

};

#endif // BOOKAPPOINTMENTWINDOW_H
