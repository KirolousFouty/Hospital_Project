#include "Feedback.h"

Feedback::Feedback()
{
    this->email = "";
    this->mobileNumber = "";
    this->feedbackText = "";
}

QString Feedback::getMobileNumber(){
    return this->mobileNumber;
}

QString Feedback::getEmail(){
    return this->email;
}

QString Feedback::getFeedbackText(){
    return this->feedbackText;
}

void Feedback::setMobileNumber(QString p_mobileNumber){
    this->mobileNumber = p_mobileNumber;
}

void Feedback::setEmail(QString p_email){
    this->email = p_email;
}

void Feedback::setFeedbackText(QString p_feedbackText){
    this->feedbackText = p_feedbackText;
}
