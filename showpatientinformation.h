#ifndef SHOWPATIENTINFORMATION_H
#define SHOWPATIENTINFORMATION_H

#include <QDialog>

namespace Ui
{
    class ShowPatientInformation;
}

class ShowPatientInformation : public QDialog
{
    Q_OBJECT

public:
    explicit ShowPatientInformation(QWidget *parent = nullptr);
    ~ShowPatientInformation();

private:
    Ui::ShowPatientInformation *ui;
};

#endif // SHOWPATIENTINFORMATION_H
