#ifndef COMPLEXSEARCHWINDOW_H
#define COMPLEXSEARCHWINDOW_H

#include <QDialog>

namespace Ui {
class ComplexSearchWindow;
}

class ComplexSearchWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ComplexSearchWindow(QWidget *parent = nullptr);
    ~ComplexSearchWindow();

private:
    Ui::ComplexSearchWindow *ui;
};

#endif // COMPLEXSEARCHWINDOW_H
