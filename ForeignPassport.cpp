#include "ForeignPassport.h"
#include <iostream>
using namespace std;

// Конструктор класса ForeignPassport
ForeignPassport::ForeignPassport(const string& surname, const string& name, const string& patronymic, const string& passportNumber, const string& foreignPassportNumber)
        : Passport(surname, name, patronymic, passportNumber), foreignPassportNumber(foreignPassportNumber), visaCount(0) {}

// Добавление визы
void ForeignPassport::addVisa(const string& visa) {
    if (visaCount < MAX_VISAS) {
        visas[visaCount++] = visa;
    }
}

// Метод для вывода информации о загранпаспорте
void ForeignPassport::showInfo() const {
    Passport::showInfo();
    cout << "Foreign Passport №: " << foreignPassportNumber << endl;
    cout << "Visas: ";
    for (int i = 0; i < visaCount; i++) {
        cout << visas[i] << " ";
    }
    cout << std::endl;
}
