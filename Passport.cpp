#include "Passport.h"
#include <iostream>
using namespace std;

// Конструктор класса Passport
Passport::Passport(const string& surname, const string& name, const string& patronymic, const string& passportNumber)
        : surname(surname), name(name), patronymic(patronymic), passportNumber(passportNumber) {}

// Метод для вывода информации о паспорте
void Passport::showInfo() const {
    cout << "Passport: " << surname << " " << name << " " << patronymic << ", № " << passportNumber << endl;
}
