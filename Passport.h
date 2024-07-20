#ifndef INC_29_JUNE_HMWRK_2_PASSPORT_H
#define INC_29_JUNE_HMWRK_2_PASSPORT_H
#include <iostream>
using namespace std;

// Базовый класс Passport
class Passport {
protected:
    string surname;
    string name;
    string patronymic; // отчество
    string passportNumber; // номер паспорта

public:
    Passport(const string& surname, const string& name, const string& patronymic, const string& passportNumber);
    virtual void showInfo() const;  // метод для отображения информации о паспорте
    virtual ~Passport() {}         // виртуальный деструктор
};



#endif //INC_29_JUNE_HMWRK_2_PASSPORT_H
