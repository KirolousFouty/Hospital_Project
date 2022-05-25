#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <QString>


class Feedback
{
public:
    Feedback();
    QString mobileNumber;
    QString email;
    QString feedbackText;

    QString getMobileNumber();
    QString getEmail();
    QString getFeedbackText();

    void setMobileNumber(QString p_mobileNumber);
    void setEmail(QString p_email);
    void setFeedbackText(QString p_feedbackText);

};

#endif // FEEDBACK_H
