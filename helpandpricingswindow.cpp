#include "helpandpricingswindow.h"
#include "ui_helpandpricingswindow.h"

HelpAndPricingsWindow::HelpAndPricingsWindow(QWidget *parent) : QDialog(parent),
                                                                ui(new Ui::HelpAndPricingsWindow)
{
    ui->setupUi(this);
}

HelpAndPricingsWindow::~HelpAndPricingsWindow()
{
    delete ui;
}
