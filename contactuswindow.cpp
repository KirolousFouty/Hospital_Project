#include "contactuswindow.h"
#include "ui_contactuswindow.h"

ContactUsWindow::ContactUsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContactUsWindow)
{
    ui->setupUi(this);

    this->feedbackLog = new QVector<Feedback>;
}

ContactUsWindow::~ContactUsWindow()
{
    delete ui;
}

void ContactUsWindow::on_submitButton_clicked()
{

    Feedback temp;

    temp.setMobileNumber(ui->mobileNumberDisplay->text());
    temp.setEmail(ui->emailDisplay->text());
    temp.setFeedbackText(ui->feedbackDisplay->text());

    this->feedbackLog->push_back(temp);

    ui->feedbackStatusDisplay->setText("Feedback Status: Feedback Received! Thank you!");
    ui->mobileNumberDisplay->setText("");
    ui->emailDisplay->setText("");
    ui->feedbackDisplay->setText("");
}

