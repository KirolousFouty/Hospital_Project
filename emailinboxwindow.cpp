#include "emailinboxwindow.h"
#include "ui_emailinboxwindow.h"

EmailInboxWindow::EmailInboxWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EmailInboxWindow)
{
    ui->setupUi(this);
}

EmailInboxWindow::~EmailInboxWindow()
{
    delete ui;
}
