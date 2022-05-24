#include "userloginwindow.h"
#include "ui_userloginwindow.h"

UserLoginWindow::UserLoginWindow(QWidget *parent) : QDialog(parent),
                                                    ui(new Ui::UserLoginWindow)
{
    ui->setupUi(this);

    this->p = new Patient;
    this->appointmentsLog = new QVector<Appointment>;
    this->arrDoc = new QVector<Doctor>;
    QLabel *p_userLoginTitle = new QLabel;
}

UserLoginWindow::~UserLoginWindow()
{
    delete ui;
}

void UserLoginWindow::on_registerButton_clicked()
{
    UserRegisterWindow userRegWin;
    userRegWin.setModal(true);

    userRegWin.p = this->p;
    userRegWin.appointmentsLog = this->appointmentsLog;
    userRegWin.arrDoc = this->arrDoc;

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
        this->p->setLoggedIn(true);
        this->p_userLoginTitle->setText("User: " + this->p->getName());
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
        ui->loginStatusTitle->setText("Login Status: Default Case."); //////////////////////
        ui->usernameDisplay->setText("");
        ui->passwordDisplay->setText("");
    }
}

void UserLoginWindow::on_backButton_clicked()
{
    this->close();
}

void UserLoginWindow::on_editButton_clicked()
{
    if (this->p->getLoggedIn() == false)
    {
        QMessageBox::about(this, "Error", "Please log in first");
        return;
    }


    UserEditWindow editwin;
    editwin.setModal(true);

    editwin.p = this->p;

    editwin.exec();

}

