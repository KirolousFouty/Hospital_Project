#ifndef PAYMENTWINDOW_H
#define PAYMENTWINDOW_H

#include <QDialog>

namespace Ui {
class PaymentWindow;
}

class PaymentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PaymentWindow(QWidget *parent = nullptr);
    ~PaymentWindow();

private:
    Ui::PaymentWindow *ui;
};

#endif // PAYMENTWINDOW_H
