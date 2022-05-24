#ifndef COMPLEXSEARCHWINDOW_H
#define COMPLEXSEARCHWINDOW_H

#include <QDialog>

#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"
#include "EmergencyVisit.h"
#include "Room.h"
#include "HomeVisit.h"

namespace Ui
{
    class ComplexSearchWindow;
}

class ComplexSearchWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ComplexSearchWindow(QWidget *parent = nullptr);
    ~ComplexSearchWindow();

    Patient *p;
    QVector<Appointment> *appointmentsLog;
    QVector<Doctor> *arrDoc;
    QVector<EmergencyVisit> *emergencyVisitLog;
    QVector<Room> *roomLog;
    QVector<HomeVisit> *homeVisitLog;

private slots:
    void on_backButton_clicked();

    void on_showAllButton_clicked();

    void on_selectTypeButton_clicked();

    void on_showByCriteriaButton_clicked();

private:
    Ui::ComplexSearchWindow *ui;
};

#endif // COMPLEXSEARCHWINDOW_H
