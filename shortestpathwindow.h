#ifndef SHORTESTPATHWINDOW_H
#define SHORTESTPATHWINDOW_H

#include <QDialog>

namespace Ui {
class ShortestPathWindow;
}

class ShortestPathWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShortestPathWindow(QWidget *parent = nullptr);
    ~ShortestPathWindow();

private:
    Ui::ShortestPathWindow *ui;
};

#endif // SHORTESTPATHWINDOW_H
