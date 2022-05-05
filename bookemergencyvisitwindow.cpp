#include "bookemergencyvisitwindow.h"
#include "ui_bookemergencyvisitwindow.h"

bookEmergencyVisitWindow::bookEmergencyVisitWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookEmergencyVisitWindow)
{
    ui->setupUi(this);
}

bookEmergencyVisitWindow::~bookEmergencyVisitWindow()
{
    delete ui;
}
