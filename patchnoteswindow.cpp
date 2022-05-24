#include "patchnoteswindow.h"
#include "ui_patchnoteswindow.h"

PatchNotesWindow::PatchNotesWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PatchNotesWindow)
{
    ui->setupUi(this);
}

PatchNotesWindow::~PatchNotesWindow()
{
    delete ui;
}

void PatchNotesWindow::on_backButton_clicked()
{
    this->close();
}

