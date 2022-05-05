#ifndef BOOKEMERGENCYVISITWINDOW_H
#define BOOKEMERGENCYVISITWINDOW_H

#include <QDialog>

namespace Ui {
class bookEmergencyVisitWindow;
}

class bookEmergencyVisitWindow : public QDialog
{
    Q_OBJECT

public:
    explicit bookEmergencyVisitWindow(QWidget *parent = nullptr);
    ~bookEmergencyVisitWindow();

private:
    Ui::bookEmergencyVisitWindow *ui;
};

#endif // BOOKEMERGENCYVISITWINDOW_H
