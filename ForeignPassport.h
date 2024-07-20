#ifndef INC_29_JUNE_HMWRK_2_FOREIGNPASSPORT_H
#define INC_29_JUNE_HMWRK_2_FOREIGNPASSPORT_H
#include "Passport.h"
#include <string>
#include <iostream>
using namespace std;

// Класс ForeignPassport, производный от Passport
class ForeignPassport : public Passport {
private:
    string foreignPassportNumber;  // номер заграничного паспорта
    static const int MAX_VISAS = 10;    // максимальное количество виз
    string visas[MAX_VISAS];       // массив виз
    int visaCount;                      // текущее количество виз

public:
    ForeignPassport(const string& surname, const string& name, const string& patronymic, const string& passportNumber, const string& foreignPassportNumber);
    void addVisa(const string& visa);  // добавить визу
    void showInfo() const override;  // переопределение метода для вывода дополнительной информации
};



#endif //INC_29_JUNE_HMWRK_2_FOREIGNPASSPORT_H
