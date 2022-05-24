#ifndef HELPANDPRICINGSWINDOW_H
#define HELPANDPRICINGSWINDOW_H

#include <QDialog>

namespace Ui {
class HelpAndPricingsWindow;
}

class HelpAndPricingsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit HelpAndPricingsWindow(QWidget *parent = nullptr);
    ~HelpAndPricingsWindow();

private:
    Ui::HelpAndPricingsWindow *ui;
};

#endif // HELPANDPRICINGSWINDOW_H
