#include "userloginwindow.h"
#include "ui_userloginwindow.h"

UserLoginWindow::UserLoginWindow(QWidget *parent) : QDialog(parent),
                                                    ui(new Ui::UserLoginWindow)
{
    ui->setupUi(this);
}

UserLoginWindow::~UserLoginWindow()
{
    delete ui;
}
