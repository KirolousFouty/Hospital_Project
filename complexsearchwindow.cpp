#include "complexsearchwindow.h"
#include "ui_complexsearchwindow.h"

ComplexSearchWindow::ComplexSearchWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ComplexSearchWindow)
{
    ui->setupUi(this);
}

ComplexSearchWindow::~ComplexSearchWindow()
{
    delete ui;
}
