#include "shortestpathwindow.h"
#include "ui_shortestpathwindow.h"

ShortestPathWindow::ShortestPathWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShortestPathWindow)
{
    ui->setupUi(this);
}

ShortestPathWindow::~ShortestPathWindow()
{
    delete ui;
}
