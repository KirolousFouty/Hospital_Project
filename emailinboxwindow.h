#ifndef EMAILINBOXWINDOW_H
#define EMAILINBOXWINDOW_H

#include <QDialog>

namespace Ui {
class EmailInboxWindow;
}

class EmailInboxWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EmailInboxWindow(QWidget *parent = nullptr);
    ~EmailInboxWindow();

private:
    Ui::EmailInboxWindow *ui;
};

#endif // EMAILINBOXWINDOW_H
