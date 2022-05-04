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

void UserLoginWindow::on_registerButton_clicked()
{
    UserRegisterWindow userRegWin;
    userRegWin.setModal(true);
    userRegWin.exec();
}

