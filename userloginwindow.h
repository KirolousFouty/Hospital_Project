#ifndef USERLOGINWINDOW_H
#define USERLOGINWINDOW_H

#include <QDialog>

namespace Ui {
class UserLoginWindow;
}

class UserLoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserLoginWindow(QWidget *parent = nullptr);
    ~UserLoginWindow();

private:
    Ui::UserLoginWindow *ui;
};

#endif // USERLOGINWINDOW_H
