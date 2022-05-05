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
    userRegWin.arrDoc = this->arrDoc;
    userRegWin.p = this->p;
    userRegWin.exec();
}

void UserLoginWindow::on_loginButton_clicked()
{

    if (ui->usernameDisplay->text() == "" || ui->passwordDisplay->text() == "")
    {
        ui->loginStatusTitle->setText("Login Status: Please fill in all fields.");
        return;
    }

    switch (p->login(ui->usernameDisplay->text(), ui->passwordDisplay->text()))
    {
    case 0:
        ui->loginStatusTitle->setText("Login Status: Logged in successfully!");

        ui->usernameDisplay->setText("");
        ui->passwordDisplay->setText("");
        break;

    case 1:
        ui->loginStatusTitle->setText("Login Status: Incorrect password. Try again.");
        ui->passwordDisplay->setText("");
        break;

    case 2:
        ui->loginStatusTitle->setText("Login Status: User does not exist. Try again.");
        ui->usernameDisplay->setText("");
        ui->passwordDisplay->setText("");
        break;
    default:
        ui->loginStatusTitle->setText("Login Status: Default Case.");
        ui->usernameDisplay->setText("");
        ui->passwordDisplay->setText("");
    }
}
