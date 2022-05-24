#ifndef PATCHNOTESWINDOW_H
#define PATCHNOTESWINDOW_H

#include <QDialog>

namespace Ui
{
    class PatchNotesWindow;
}

class PatchNotesWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PatchNotesWindow(QWidget *parent = nullptr);
    ~PatchNotesWindow();

private slots:
    void on_backButton_clicked();

private:
    Ui::PatchNotesWindow *ui;
};

#endif // PATCHNOTESWINDOW_H
