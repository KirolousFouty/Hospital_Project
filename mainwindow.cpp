#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    move(QGuiApplication::screens().at(0)->geometry().center() - frameGeometry().center());

    this->p = new Patient;
    this->appointmentsLog = new QVector<Appointment>;
    this->cancelledAppointmentsLog = new QVector<Appointment>;
    this->arrDoc = new QVector<Doctor>;
    this->emergencyVisitLog = new QVector<EmergencyVisit>;
    this->roomLog = new QVector<Room>;
    this->homeVisitLog = new QVector<HomeVisit>;
    this->feedbackLog = new QVector<Feedback>;


    this->p_userLoginTitle = ui->userLoginTitle;

    Doctor d1("Ahmed", 121, 3.4, 1050, "Cardio");
    Doctor d2("Tarek", 122, 3.3, 1500, "Emergency");
    Doctor d3("Youssef", 123, 4.4, 1350, "Cardio");
    Doctor d4("Ziad", 124, 3.4, 1100, "Blood");
    Doctor d5("Ali", 125, 3.6, 1200, "Neurology");
    Doctor d6("Farah", 126, 4.5, 1950, "Neurology");
    Doctor d7("Kiro", 127, 4.4, 1900, "Blood");
    Doctor d8("Nour", 128, 3.7, 1700, "Emergency");
    Doctor d9("Hasan", 129, 3.3, 900, "Nutrition");
    Doctor d10("Omar", 130, 4.2, 1300, "Nutrition");

    arrDoc->push_back(d1);
    arrDoc->push_back(d2);
    arrDoc->push_back(d3);
    arrDoc->push_back(d4);
    arrDoc->push_back(d5);
    arrDoc->push_back(d6);
    arrDoc->push_back(d7);
    arrDoc->push_back(d8);
    arrDoc->push_back(d9);
    arrDoc->push_back(d10);

    Patient Admin;
    this->p->userMap.insert(pair<QString, Patient>(Admin.getUsername(), Admin));

    paymentsLogFile.open("paymentsLogFile.txt", ios::out);
    paymentsLogFile.close();
    remove("paymentsLogFile.txt");

    PatchNotesWindow patchwin;
    patchwin.setModal(true);

    patchwin.exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    UserLoginWindow userloginwin;
    userloginwin.setModal(true);

    userloginwin.p = this->p;
    userloginwin.appointmentsLog = this->appointmentsLog;
    userloginwin.arrDoc = this->arrDoc;
    userloginwin.p_userLoginTitle = this->p_userLoginTitle;
    userloginwin.exec();
}

void MainWindow::on_showPatientInformationButton_clicked()
{

    if (this->p->getLoggedIn() == false)
    {
        QMessageBox::about(this, "Error", "Please log in first");
    }
    else
    {

        ShowPatientInformation showpatientinfo;
        showpatientinfo.setModal(true);

        showpatientinfo.p = this->p;
        showpatientinfo.appointmentsLog = this->appointmentsLog;
        showpatientinfo.arrDoc = this->arrDoc;

        showpatientinfo.exec();
    }
}

void MainWindow::on_bookAppointmentButton_clicked()
{

    BookAppointmentWindow bookappointmentwin;
    bookappointmentwin.setModal(true);

    bookappointmentwin.p = this->p;
    bookappointmentwin.appointmentsLog = this->appointmentsLog;
    bookappointmentwin.cancelledAppointmentsLog = this->cancelledAppointmentsLog;
    bookappointmentwin.arrDoc = this->arrDoc;
    bookappointmentwin.roomLog = this->roomLog;

    bookappointmentwin.exec();

    this->appointmentsLog = bookappointmentwin.appointmentsLog;
}

void MainWindow::on_showAppointmentsButton_clicked()
{
    ui->appointmentsTitle->setText("");

    if (this->appointmentsLog->size() == 0 && this->emergencyVisitLog->size() == 0 && this->roomLog->size() == 0 && this->homeVisitLog->size() == 0)
    {
        ui->appointmentsTitle->setText("No current bookings.");
        return;
    }

    for (int i = 0; i < this->emergencyVisitLog->size(); i++)
    {
        ui->appointmentsTitle->setText(ui->appointmentsTitle->text() + "\nEmergency Visit #" + QString::number((i + 1)) + " " + this->emergencyVisitLog->at(i).showVisit());
    }

    for (int i = 0; i < this->appointmentsLog->size(); i++)
    {
        ui->appointmentsTitle->setText(ui->appointmentsTitle->text() + "\nAppointment #" + QString::number((i + 1)) + " " + this->appointmentsLog->at(i).showAppointment());
    }

    for (int i = 0; i < this->cancelledAppointmentsLog->size(); i++)
    {
        ui->appointmentsTitle->setText(ui->appointmentsTitle->text() + "\nCancelled Appointment #" + QString::number((i + 1)) + " " + this->cancelledAppointmentsLog->at(i).showAppointment());
    }

    for (int i = 0; i < this->roomLog->size(); i++)
    {
        ui->appointmentsTitle->setText(ui->appointmentsTitle->text() + "\nRoom #" + QString::number((i + 1)) + " " + this->roomLog->at(i).showRoom());
    }

    for (int i = 0; i < this->homeVisitLog->size(); i++)
    {
        ui->appointmentsTitle->setText(ui->appointmentsTitle->text() + "\nHome Visit #" + QString::number((i + 1)) + " " + this->homeVisitLog->at(i).showHomeVisit());
    }
}

void MainWindow::on_bookRoomButton_clicked()
{

    BookRoomWindow bookroomwin;
    bookroomwin.setModal(true);

    bookroomwin.p = this->p;
    bookroomwin.appointmentsLog = this->appointmentsLog;
    bookroomwin.arrDoc = this->arrDoc;
    bookroomwin.roomLog = this->roomLog;

    bookroomwin.exec();

    this->roomLog = bookroomwin.roomLog;
}

void MainWindow::on_emergencyVisitButton_clicked()
{
    bookEmergencyVisitWindow bookemervisit;
    bookemervisit.setModal(true);

    bookemervisit.p = this->p;
    bookemervisit.appointmentsLog = this->appointmentsLog;
    bookemervisit.arrDoc = this->arrDoc;
    bookemervisit.emergencyVisitLog = this->emergencyVisitLog;

    bookemervisit.exec();
}

void MainWindow::on_rechargeButton_clicked()
{
    if (this->p->getLoggedIn() == false)
    {
        QMessageBox::about(this, "Error", "Please log in first");
    }
    else
    {
        rechargeBalanceWindow rechargewin;
        rechargewin.setModal(true);

        rechargewin.p = this->p;

        rechargewin.exec();
    }
}

void MainWindow::on_doBloodTestButton_clicked()
{
    doBloodTestWindow doBTestwin;
    doBTestwin.setModal(true);

    doBTestwin.p = this->p;

    doBTestwin.exec();
}

void MainWindow::on_bookHomeVisitButton_clicked()
{
    bookHomeVisitWindow bookHVisitWin;
    bookHVisitWin.setModal(true);

    bookHVisitWin.p = this->p;
    bookHVisitWin.homeVisitLog = this->homeVisitLog;

    bookHVisitWin.exec();
}

void MainWindow::on_helpAndPricingsButton_clicked()
{
    HelpAndPricingsWindow helpwin;
    helpwin.setModal(true);

    helpwin.exec();
}

void MainWindow::on_openEmailInboxButton_clicked()
{
    EmailInboxWindow emailwin;
    emailwin.setModal(true);

    emailwin.p = this->p;
    emailwin.appointmentsLog = this->appointmentsLog;
    emailwin.cancelledAppointmentsLog = this->cancelledAppointmentsLog;
    emailwin.arrDoc = this->arrDoc;
    emailwin.emergencyVisitLog = this->emergencyVisitLog;
    emailwin.roomLog = this->roomLog;
    emailwin.homeVisitLog = this->homeVisitLog;

    emailwin.exec();
}

void MainWindow::on_shortestPathButton_clicked()
{
        ShortestPathWindow pathwin;
        pathwin.setModal(true);

        pathwin.exec();
}

void MainWindow::on_complexSearch_clicked()
{
    ComplexSearchWindow searchwin;
    searchwin.setModal(true);

    searchwin.p = this->p;
    searchwin.appointmentsLog = this->appointmentsLog;
    searchwin.arrDoc = this->arrDoc;
    searchwin.emergencyVisitLog = this->emergencyVisitLog;
    searchwin.roomLog = this->roomLog;
    searchwin.homeVisitLog = this->homeVisitLog;

    searchwin.exec();
}

void MainWindow::on_contactUsButton_clicked()
{
    ContactUsWindow contactwin;
    contactwin.setModal(true);

    contactwin.feedbackLog = this->feedbackLog;

    contactwin.exec();
}

